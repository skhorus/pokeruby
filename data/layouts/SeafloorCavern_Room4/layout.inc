SeafloorCavern_Room4_MapBorder:: @ 82DDFCC
	.incbin "data/layouts/SeafloorCavern_Room4/border.bin"

SeafloorCavern_Room4_MapBlockdata:: @ 82DDFD4
	.incbin "data/layouts/SeafloorCavern_Room4/map.bin"

	.align 2
SeafloorCavern_Room4_Layout:: @ 82DE280
	.4byte 0x12
	.4byte 0x13
	.4byte SeafloorCavern_Room4_MapBorder
	.4byte SeafloorCavern_Room4_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Cave
