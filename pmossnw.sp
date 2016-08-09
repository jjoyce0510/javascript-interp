Transistor symmetry test
.options list node post
.tran 200p 30n


.include '../../models/SNWFET/NW_TG_model.sp'

*voltage sources
vcc vcc 0 1.2


*two transistors
x1 d pgd cg pgs s NW3G n=20

vds d 0 0 
vpgs pgs 0 0
vpgd pgd 0 0
vcg cg 0 0
vs s 0 0


.dc vds 0 1.2 0.05 vcg 0 1.2 0.2


.probe dc i(vss) i1(x1) i2(x1) i3(x1)
*.plot v(vs) v(vd) v(vg)
.end