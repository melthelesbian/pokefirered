	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.syntax unified

	.text

	thumb_func_start sub_805A1DC
sub_805A1DC: @ 805A1DC
	push {lr}
	lsls r0, 24
	movs r1, 0xC0
	lsls r1, 22
	adds r0, r1
	lsrs r0, 24
	cmp r0, 0x1
	bls _0805A1F0
	movs r0, 0
	b _0805A1F2
_0805A1F0:
	movs r0, 0x1
_0805A1F2:
	pop {r1}
	bx r1
	thumb_func_end sub_805A1DC

	thumb_func_start sub_805A1F8
sub_805A1F8: @ 805A1F8
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	movs r1, 0
	cmp r0, 0xD1
	bne _0805A206
	movs r1, 0x1
_0805A206:
	adds r0, r1, 0
	pop {r1}
	bx r1
	thumb_func_end sub_805A1F8

	thumb_func_start sub_805A20C
sub_805A20C: @ 805A20C
	movs r0, 0
	bx lr
	thumb_func_end sub_805A20C

	thumb_func_start sub_805A210
sub_805A210: @ 805A210
	movs r0, 0
	bx lr
	thumb_func_end sub_805A210

	thumb_func_start sub_805A214
sub_805A214: @ 805A214
	movs r0, 0
	bx lr
	thumb_func_end sub_805A214

	thumb_func_start sub_805A218
sub_805A218: @ 805A218
	movs r0, 0
	bx lr
	thumb_func_end sub_805A218

	thumb_func_start sub_805A21C
sub_805A21C: @ 805A21C
	movs r0, 0
	bx lr
	thumb_func_end sub_805A21C

	thumb_func_start sub_805A220
sub_805A220: @ 805A220
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x22
	beq _0805A22E
	movs r0, 0
	b _0805A230
_0805A22E:
	movs r0, 0x1
_0805A230:
	pop {r1}
	bx r1
	thumb_func_end sub_805A220

	thumb_func_start sub_805A234
sub_805A234: @ 805A234
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0xA
	beq _0805A242
	movs r0, 0
	b _0805A244
_0805A242:
	movs r0, 0x1
_0805A244:
	pop {r1}
	bx r1
	thumb_func_end sub_805A234

	thumb_func_start sub_805A248
sub_805A248: @ 805A248
	movs r0, 0
	bx lr
	thumb_func_end sub_805A248

	thumb_func_start sub_805A24C
sub_805A24C: @ 805A24C
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x81
	beq _0805A25A
	movs r0, 0
	b _0805A25C
_0805A25A:
	movs r0, 0x1
_0805A25C:
	pop {r1}
	bx r1
	thumb_func_end sub_805A24C

	thumb_func_start sub_805A260
sub_805A260: @ 805A260
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x82
	beq _0805A26E
	movs r0, 0
	b _0805A270
_0805A26E:
	movs r0, 0x1
_0805A270:
	pop {r1}
	bx r1
	thumb_func_end sub_805A260

	thumb_func_start sub_805A274
sub_805A274: @ 805A274
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 24
	lsrs r1, 24
	cmp r1, 0x2
	bne _0805A286
	cmp r0, 0x87
	beq _0805A28A
_0805A286:
	movs r0, 0
	b _0805A28C
_0805A28A:
	movs r0, 0x1
_0805A28C:
	pop {r1}
	bx r1
	thumb_func_end sub_805A274

	thumb_func_start sub_805A290
sub_805A290: @ 805A290
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 24
	lsrs r1, 24
	cmp r1, 0x2
	bne _0805A2A2
	cmp r0, 0x88
	beq _0805A2A6
_0805A2A2:
	movs r0, 0
	b _0805A2A8
_0805A2A6:
	movs r0, 0x1
_0805A2A8:
	pop {r1}
	bx r1
	thumb_func_end sub_805A290

	thumb_func_start sub_805A2AC
sub_805A2AC: @ 805A2AC
	movs r0, 0
	bx lr
	thumb_func_end sub_805A2AC

	thumb_func_start sub_805A2B0
sub_805A2B0: @ 805A2B0
	movs r0, 0
	bx lr
	thumb_func_end sub_805A2B0

	thumb_func_start sub_805A2B4
sub_805A2B4: @ 805A2B4
	movs r0, 0
	bx lr
	thumb_func_end sub_805A2B4

	thumb_func_start sub_805A2B8
sub_805A2B8: @ 805A2B8
	movs r0, 0
	bx lr
	thumb_func_end sub_805A2B8

	thumb_func_start sub_805A2BC
sub_805A2BC: @ 805A2BC
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r2, _0805A2D4 @ =gUnknown_8353068
	adds r0, r2
	ldrb r0, [r0]
	ands r0, r1
	cmp r0, 0
	bne _0805A2D8
	movs r0, 0
	b _0805A2DA
	.align 2, 0
_0805A2D4: .4byte gUnknown_8353068
_0805A2D8:
	movs r0, 0x1
_0805A2DA:
	pop {r1}
	bx r1
	thumb_func_end sub_805A2BC

	thumb_func_start sub_805A2E0
sub_805A2E0: @ 805A2E0
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x54
	beq _0805A2EE
	movs r0, 0
	b _0805A2F0
_0805A2EE:
	movs r0, 0x1
_0805A2F0:
	pop {r1}
	bx r1
	thumb_func_end sub_805A2E0

	thumb_func_start sub_805A2F4
sub_805A2F4: @ 805A2F4
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x55
	beq _0805A302
	movs r0, 0
	b _0805A304
_0805A302:
	movs r0, 0x1
_0805A304:
	pop {r1}
	bx r1
	thumb_func_end sub_805A2F4

	thumb_func_start sub_805A308
sub_805A308: @ 805A308
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x56
	beq _0805A316
	movs r0, 0
	b _0805A318
_0805A316:
	movs r0, 0x1
_0805A318:
	pop {r1}
	bx r1
	thumb_func_end sub_805A308

	thumb_func_start sub_805A31C
sub_805A31C: @ 805A31C
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x57
	beq _0805A32A
	movs r0, 0
	b _0805A32C
_0805A32A:
	movs r0, 0x1
_0805A32C:
	pop {r1}
	bx r1
	thumb_func_end sub_805A31C

	thumb_func_start sub_805A330
sub_805A330: @ 805A330
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x58
	beq _0805A33E
	movs r0, 0
	b _0805A340
_0805A33E:
	movs r0, 0x1
_0805A340:
	pop {r1}
	bx r1
	thumb_func_end sub_805A330

	thumb_func_start sub_805A344
sub_805A344: @ 805A344
	push {lr}
	lsls r0, 24
	movs r1, 0
	movs r2, 0xAC
	lsls r2, 24
	adds r0, r2
	lsrs r0, 24
	cmp r0, 0x3
	bhi _0805A358
	movs r1, 0x1
_0805A358:
	adds r0, r1, 0
	pop {r1}
	bx r1
	thumb_func_end sub_805A344

	thumb_func_start sub_805A360
sub_805A360: @ 805A360
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x84
	beq _0805A36E
	movs r0, 0
	b _0805A370
_0805A36E:
	movs r0, 0x1
_0805A370:
	pop {r1}
	bx r1
	thumb_func_end sub_805A360

	thumb_func_start sub_805A374
sub_805A374: @ 805A374
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x89
	beq _0805A382
	movs r0, 0
	b _0805A384
_0805A382:
	movs r0, 0x1
_0805A384:
	pop {r1}
	bx r1
	thumb_func_end sub_805A374

	thumb_func_start sub_805A388
sub_805A388: @ 805A388
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x8A
	beq _0805A396
	movs r0, 0
	b _0805A398
_0805A396:
	movs r0, 0x1
_0805A398:
	pop {r1}
	bx r1
	thumb_func_end sub_805A388

	thumb_func_start sub_805A39C
sub_805A39C: @ 805A39C
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x8B
	beq _0805A3AA
	movs r0, 0
	b _0805A3AC
_0805A3AA:
	movs r0, 0x1
_0805A3AC:
	pop {r1}
	bx r1
	thumb_func_end sub_805A39C

	thumb_func_start sub_805A3B0
sub_805A3B0: @ 805A3B0
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x8C
	beq _0805A3BE
	movs r0, 0
	b _0805A3C0
_0805A3BE:
	movs r0, 0x1
_0805A3C0:
	pop {r1}
	bx r1
	thumb_func_end sub_805A3B0

	thumb_func_start sub_805A3C4
sub_805A3C4: @ 805A3C4
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x20
	beq _0805A3D2
	movs r0, 0
	b _0805A3D4
_0805A3D2:
	movs r0, 0x1
_0805A3D4:
	pop {r1}
	bx r1
	thumb_func_end sub_805A3C4

	thumb_func_start sub_805A3D8
sub_805A3D8: @ 805A3D8
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 24
	lsrs r1, 24
	cmp r1, 0x2
	bne _0805A3EA
	cmp r0, 0x8D
	beq _0805A3EE
_0805A3EA:
	movs r0, 0
	b _0805A3F0
_0805A3EE:
	movs r0, 0x1
_0805A3F0:
	pop {r1}
	bx r1
	thumb_func_end sub_805A3D8

	thumb_func_start sub_805A3F4
sub_805A3F4: @ 805A3F4
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 24
	lsrs r1, 24
	cmp r1, 0x2
	bne _0805A406
	cmp r0, 0x8E
	beq _0805A40A
_0805A406:
	movs r0, 0
	b _0805A40C
_0805A40A:
	movs r0, 0x1
_0805A40C:
	pop {r1}
	bx r1
	thumb_func_end sub_805A3F4

	thumb_func_start sub_805A410
sub_805A410: @ 805A410
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x8F
	beq _0805A41E
	movs r0, 0
	b _0805A420
_0805A41E:
	movs r0, 0x1
_0805A420:
	pop {r1}
	bx r1
	thumb_func_end sub_805A410

	thumb_func_start sub_805A424
sub_805A424: @ 805A424
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x91
	beq _0805A432
	movs r0, 0
	b _0805A434
_0805A432:
	movs r0, 0x1
_0805A434:
	pop {r1}
	bx r1
	thumb_func_end sub_805A424

	thumb_func_start sub_805A438
sub_805A438: @ 805A438
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x92
	beq _0805A446
	movs r0, 0
	b _0805A448
_0805A446:
	movs r0, 0x1
_0805A448:
	pop {r1}
	bx r1
	thumb_func_end sub_805A438

	thumb_func_start sub_805A44C
sub_805A44C: @ 805A44C
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x90
	beq _0805A45A
	movs r0, 0
	b _0805A45C
_0805A45A:
	movs r0, 0x1
_0805A45C:
	pop {r1}
	bx r1
	thumb_func_end sub_805A44C

	thumb_func_start sub_805A460
sub_805A460: @ 805A460
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	movs r1, 0
	cmp r0, 0x2A
	bne _0805A46E
	movs r1, 0x1
_0805A46E:
	adds r0, r1, 0
	pop {r1}
	bx r1
	thumb_func_end sub_805A460

	thumb_func_start sub_805A474
sub_805A474: @ 805A474
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x93
	beq _0805A482
	movs r0, 0
	b _0805A484
_0805A482:
	movs r0, 0x1
_0805A484:
	pop {r1}
	bx r1
	thumb_func_end sub_805A474

	thumb_func_start sub_805A488
sub_805A488: @ 805A488
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x94
	beq _0805A496
	movs r0, 0
	b _0805A498
_0805A496:
	movs r0, 0x1
_0805A498:
	pop {r1}
	bx r1
	thumb_func_end sub_805A488

	thumb_func_start sub_805A49C
sub_805A49C: @ 805A49C
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x95
	beq _0805A4AA
	movs r0, 0
	b _0805A4AC
_0805A4AA:
	movs r0, 0x1
_0805A4AC:
	pop {r1}
	bx r1
	thumb_func_end sub_805A49C

	thumb_func_start sub_805A4B0
sub_805A4B0: @ 805A4B0
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x96
	beq _0805A4BE
	movs r0, 0
	b _0805A4C0
_0805A4BE:
	movs r0, 0x1
_0805A4C0:
	pop {r1}
	bx r1
	thumb_func_end sub_805A4B0

	thumb_func_start sub_805A4C4
sub_805A4C4: @ 805A4C4
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x97
	beq _0805A4D2
	movs r0, 0
	b _0805A4D4
_0805A4D2:
	movs r0, 0x1
_0805A4D4:
	pop {r1}
	bx r1
	thumb_func_end sub_805A4C4

	thumb_func_start sub_805A4D8
sub_805A4D8: @ 805A4D8
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x98
	beq _0805A4E6
	movs r0, 0
	b _0805A4E8
_0805A4E6:
	movs r0, 0x1
_0805A4E8:
	pop {r1}
	bx r1
	thumb_func_end sub_805A4D8

	thumb_func_start sub_805A4EC
sub_805A4EC: @ 805A4EC
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x99
	beq _0805A4FA
	movs r0, 0
	b _0805A4FC
_0805A4FA:
	movs r0, 0x1
_0805A4FC:
	pop {r1}
	bx r1
	thumb_func_end sub_805A4EC

	thumb_func_start sub_805A500
sub_805A500: @ 805A500
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x9A
	beq _0805A50E
	movs r0, 0
	b _0805A510
_0805A50E:
	movs r0, 0x1
_0805A510:
	pop {r1}
	bx r1
	thumb_func_end sub_805A500

	thumb_func_start sub_805A514
sub_805A514: @ 805A514
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x9B
	beq _0805A522
	movs r0, 0
	b _0805A524
_0805A522:
	movs r0, 0x1
_0805A524:
	pop {r1}
	bx r1
	thumb_func_end sub_805A514

	thumb_func_start sub_805A528
sub_805A528: @ 805A528
	movs r0, 0
	bx lr
	thumb_func_end sub_805A528

	thumb_func_start sub_805A52C
sub_805A52C: @ 805A52C
	movs r0, 0
	bx lr
	thumb_func_end sub_805A52C

	thumb_func_start sub_805A530
sub_805A530: @ 805A530
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x9E
	beq _0805A53E
	movs r0, 0
	b _0805A540
_0805A53E:
	movs r0, 0x1
_0805A540:
	pop {r1}
	bx r1
	thumb_func_end sub_805A530

	thumb_func_start sub_805A544
sub_805A544: @ 805A544
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0x9F
	beq _0805A552
	movs r0, 0
	b _0805A554
_0805A552:
	movs r0, 0x1
_0805A554:
	pop {r1}
	bx r1
	thumb_func_end sub_805A544

	thumb_func_start sub_805A558
sub_805A558: @ 805A558
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0xA0
	beq _0805A566
	movs r0, 0
	b _0805A568
_0805A566:
	movs r0, 0x1
_0805A568:
	pop {r1}
	bx r1
	thumb_func_end sub_805A558

	thumb_func_start sub_805A56C
sub_805A56C: @ 805A56C
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0xA1
	beq _0805A57A
	movs r0, 0
	b _0805A57C
_0805A57A:
	movs r0, 0x1
_0805A57C:
	pop {r1}
	bx r1
	thumb_func_end sub_805A56C

	thumb_func_start sub_805A580
sub_805A580: @ 805A580
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0xA2
	beq _0805A58E
	movs r0, 0
	b _0805A590
_0805A58E:
	movs r0, 0x1
_0805A590:
	pop {r1}
	bx r1
	thumb_func_end sub_805A580

	thumb_func_start sub_805A594
sub_805A594: @ 805A594
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	cmp r0, 0xA3
	beq _0805A5A2
	movs r0, 0
	b _0805A5A4
_0805A5A2:
	movs r0, 0x1
_0805A5A4:
	pop {r1}
	bx r1
	thumb_func_end sub_805A594

	.align 2, 0 @ Don't pad with nop.
