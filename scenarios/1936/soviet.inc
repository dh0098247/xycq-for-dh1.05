##############################
# Country definition for SOV #
##############################
province = {
  id = 133 # 摩尔曼斯克
}
province = {
  id = 163 # 斯大林格勒
  landfort = 10
}
province = {
  id = 168 # 高尔基（下诺夫哥罗德）
}
province = {
  id = 175 # 莫斯科
  landfort = 10
}
province = {
  id = 176 # 雷宾斯克
}
province = {
  id = 187 # 列宁格勒
  landfort = 10
  coastalfort = 5
}
province = {
  id = 201 # 阿巴扎
}
province = {
  id = 212 # 明斯克
}
province = {
  id = 219 # 斯摩棱斯克
}
province = {
  id = 233 # 敖德萨
}
province = {
  id = 238 # 基辅
}
province = {
  id = 248 # 哈尔科夫
}
province = {
  id = 253 # 塞瓦斯托波尔
  landfort = 5
  coastalfort = 5
}
province = {
  id = 255 # 新罗西斯克
}
province = {
  id = 258 # 罗斯托夫
}
province = {
  id = 264 # 巴甫洛夫斯克
}
province = {
  id = 281 # 利佩茨克
}
province = {
  id = 1172 # 勘察加彼得罗巴甫洛夫斯克
}
province = {
  id = 1368 # 瓦倫（共青城）
}
province = {
  id = 1372 # 海參崴（符拉迪沃斯托克）
  landfort = 2
  coastalfort = 2
}
province = {
  id = 1384 # 赤塔
}
province = {
  id = 1422 # 阿拉木圖
}
province = {
  id = 1544 # 托木斯克
}
province = {
  id = 1548 # 新西伯利亚
}
province = {
  id = 1552 # 鄂木斯克
}
province = {
  id = 1567 # 乌法
}
province = {
  id = 1572 # 斯维尔德洛夫斯克（叶卡捷琳堡）
}
province = {
  id = 1574 # 车里雅宾斯克
}
province = {
  id = 1577 # 奥尔斯克
}
province = {
  id = 1783 # 基洛夫
}
province = {
  id = 1827 # 奇斯托波尔
}
province = {
  id = 1828 # 古比雪夫
}
province = {
  id = 1838 # 阿斯特拉罕
}
province = {
  id = 1839 # 叶尔绍夫
}
province = {
  id = 1848 # 巴统
}
province = {
  id = 1907 # 巴库
  landfort = 5
}
province = {
  id = 3461 # 涅比特达格
}
province = {
  id = 3530 # 谢苗诺夫
}

#####################
# Country main data #
#####################

country = {
  tag                = SOV
  regular_id         = RUS
  intrinsic_gov_type = leninist
  capital            = 175 # 莫斯科
  dissent            = 25
  manpower           = 2000
  tc_mod                 = 1
  research_mod           = 1.05
  peacetime_ic_mod       = 0.7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 500
  money          = 50
  transports     = 500
  escorts        = 150

  diplomacy = {
    relation = {
      tag        = AFG
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = BRA value = -50 }
    relation = {
      tag        = BUL
      value      = 15
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = CHC value = 100 }
    relation = { tag = CZE value = 100 }
    relation = { tag = ENG value = -25 }
    relation = {
      tag        = EST
      value      = -30
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = DEN
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = FIN
      value      = 1
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = {
      tag        = FRA
      value      = 100
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = {
      tag        = SIK
      value      = 150
      access     = yes
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = GER value = 1 }
    relation = { tag = GRE value = 15 }
    relation = { tag = IRE value = 1 }
    relation = { tag = JAP value = -10 }
    relation = {
      tag        = LAT
      value      = -30
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = LIT
      value      = -30
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = MON value = 150 access = yes }
    relation = {
      tag        = PER
      value      = -20
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = POL value = -50 }
    relation = { tag = ROM value = 1 }
    relation = { tag = SAU value = 1 }
    relation = { tag = SIK value = 125 access = yes }
    relation = { tag = SPR value = -10 }
    relation = {
      tag        = TAN
      value      = 200
      access     = yes
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = TUR
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = URU value = -100 }
    relation = { tag = USA value = 35 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = NOR
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = SWE
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 4 }

  nationalprovinces      = { 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1159 1160 1161 1162 1163 1164 1165 1166 1167 1171 1172 1174 1175 1176 133 134 135 1366 1367 1368 1369 1370 1371 1372 1373 1383 1384 1405 1409 1410 1411 1412 1413 1414 1415 1416 1417 1422 1423 1424 1425 1426 1427 1428 1429 1485 1487 1488 1489 1490 1491 150 151 152 1520 1521 1522 1523 1524 1525 1526 1527 1528 1529 153 1531 1532 1533 1534 1535 1536 1537 1538 1539 154 1540 1541 1542 1543 1544 1545 1546 1547 1548 1549 155 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 156 1560 1561 1562 1563 1564 1565 1566 1567 1568 1569 157 1570 1571 1572 1573 1574 1575 1576 1577 1578 1579 158 1580 1581 1582 1583 1584 1585 1586 1587 1588 1589 159 1590 1591 1592 1593 1594 1596 1597 1598 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 1771 1772 1773 1774 1775 1776 1777 1778 178 1780 1781 1782 1783 179 180 181 182 1827 1828 1829 183 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 184 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 185 1850 1856 1857 1858 186 187 1874 188 189 1891 1893 1895 190 1907 191 192 200 201 212 215 216 217 218 219 220 221 225 226 227 228 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 276 277 278 279 280 281 282 283 284 285 286 287 288 289 3258 3259 3260 3261 3401 3402 3403 3404 3405 3406 3407 3408 3409 3410 3411 3412 3413 3414 3415 3416 3417 3418 3419 3420 3421 3422 3423 3424 3425 3426 3427 3428 3429 3430 3431 3432 3433 3434 3435 3436 3437 3438 3439 3440 3441 3442 3443 3444 3445 3446 3447 3448 3449 3450 3451 3452 3453 3454 3455 3456 3457 3458 3459 3460 3461 3462 3463 3465 3466 3467 3468 3469 3473 3474 3475 3476 3477 3478 3479 3482 3483 3484 3485 3486 3487 3488 3489 3490 3491 3492 3493 3494 3495 3496 3497 3498 3499 3500 3501 3502 3503 3504 3505 3506 3507 3508 3509 3510 3511 3512 3513 3514 3515 3516 3517 3518 3519 3520 3521 3522 3523 3524 3525 3526 3527 3528 3529 3530 3531 3532 3533 3534 3535 3536 3537 3538 3539 3540 3541 3542 3543 3544 3545 3546 3547 3548 3549 3550 3551 3552 3553 3554 3555 3556 3557 3558 3559 3560 3561 3562 3563 3564 3565 3566 3567 3568 3569 3570 3571 3572 3575 3638 3639 3640 4095 433 434 94 435 2818 }
  ownedprovinces         = { 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1159 1160 1161 1162 1163 1164 1165 1166 1167 1171 1172 1175 133 134 135 1366 1367 1368 1369 1370 1371 1372 1373 1383 1384 1405 1409 1410 1411 1412 1413 1414 1415 1416 1417 1422 1423 1424 1425 1426 1427 1428 1429 1485 1487 1488 1489 1490 1491 150 151 152 1520 1521 1522 1523 1524 1525 1526 1527 1528 1529 153 1531 1532 1533 1534 1535 1536 1537 1538 1539 154 1540 1541 1542 1543 1544 1545 1546 1547 1548 1549 155 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 156 1560 1561 1562 1563 1564 1565 1566 1567 1568 1569 157 1570 1571 1572 1573 1574 1575 1576 1577 1578 1579 158 1580 1581 1582 1583 1584 1585 1586 1587 1588 1589 159 1590 1591 1592 1593 1594 1596 1597 1598 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 1771 1772 1773 1774 1775 1776 1777 1778 178 1780 1781 1782 1783 179 180 181 182 1827 1828 1829 183 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 184 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 185 1850 1856 1857 1858 186 187 1874 188 189 1891 1893 1895 190 1907 191 192 200 201 212 215 216 217 218 219 220 221 225 226 227 228 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 276 277 278 279 280 281 2818 282 283 284 285 286 287 288 289 3401 3402 3403 3404 3405 3406 3407 3408 3409 3410 3411 3412 3413 3414 3415 3416 3417 3418 3419 3420 3421 3422 3423 3424 3425 3426 3427 3428 3429 3430 3431 3432 3433 3434 3435 3436 3437 3438 3439 3440 3441 3442 3443 3444 3445 3446 3447 3448 3449 3450 3451 3452 3453 3454 3455 3456 3457 3458 3459 3460 3461 3462 3463 3465 3466 3467 3468 3469 3473 3474 3475 3476 3477 3478 3479 3482 3483 3484 3485 3486 3487 3488 3489 3490 3491 3492 3493 3494 3495 3496 3497 3498 3499 3500 3501 3502 3503 3504 3505 3506 3507 3508 3509 3510 3511 3512 3513 3514 3515 3516 3517 3518 3519 3520 3521 3522 3523 3524 3525 3526 3527 3528 3529 3530 3531 3532 3533 3534 3535 3536 3537 3538 3539 3540 3541 3542 3543 3544 3545 3546 3547 3548 3549 3550 3551 3552 3553 3554 3555 3556 3557 3558 3559 3560 3561 3562 3563 3564 3565 3566 3567 3568 3569 3570 3571 3572 3638 3639 3640 4095 94 }
  controlledprovinces    = { 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1159 1160 1161 1162 1163 1164 1165 1166 1167 1171 1172 1175 133 134 135 1366 1367 1368 1369 1370 1371 1372 1373 1383 1384 1405 1409 1410 1411 1412 1413 1414 1415 1416 1417 1422 1423 1424 1425 1426 1427 1428 1429 1485 1487 1488 1489 1490 1491 150 151 152 1520 1521 1522 1523 1524 1525 1526 1527 1528 1529 153 1531 1532 1533 1534 1535 1536 1537 1538 1539 154 1540 1541 1542 1543 1544 1545 1546 1547 1548 1549 155 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 156 1560 1561 1562 1563 1564 1565 1566 1567 1568 1569 157 1570 1571 1572 1573 1574 1575 1576 1577 1578 1579 158 1580 1581 1582 1583 1584 1585 1586 1587 1588 1589 159 1590 1591 1592 1593 1594 1596 1597 1598 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 1771 1772 1773 1774 1775 1776 1777 1778 178 1780 1781 1782 1783 179 180 181 182 1827 1828 1829 183 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 184 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 185 1850 1856 1857 1858 186 187 1874 188 189 1891 1893 1895 190 1907 191 192 200 201 212 215 216 217 218 219 220 221 225 226 227 228 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 276 277 278 279 280 281 2818 282 283 284 285 286 287 288 289 3401 3402 3403 3404 3405 3406 3407 3408 3409 3410 3411 3412 3413 3414 3415 3416 3417 3418 3419 3420 3421 3422 3423 3424 3425 3426 3427 3428 3429 3430 3431 3432 3433 3434 3435 3436 3437 3438 3439 3440 3441 3442 3443 3444 3445 3446 3447 3448 3449 3450 3451 3452 3453 3454 3455 3456 3457 3458 3459 3460 3461 3462 3463 3465 3466 3467 3468 3469 3473 3474 3475 3476 3477 3478 3479 3482 3483 3484 3485 3486 3487 3488 3489 3490 3491 3492 3493 3494 3495 3496 3497 3498 3499 3500 3501 3502 3503 3504 3505 3506 3507 3508 3509 3510 3511 3512 3513 3514 3515 3516 3517 3518 3519 3520 3521 3522 3523 3524 3525 3526 3527 3528 3529 3530 3531 3532 3533 3534 3535 3536 3537 3538 3539 3540 3541 3542 3543 3544 3545 3546 3547 3548 3549 3550 3551 3552 3553 3554 3555 3556 3557 3558 3559 3560 3561 3562 3563 3564 3565 3566 3567 3568 3569 3570 3571 3572 3638 3639 3640 4095 94 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5090 5060 5200 5810 5120 5180 5660 5670 5680 5310 5010 1010 1020 1100 1110 1710 1830 1840 1850 2280 2290 2610 2300 2420 2430 2540 2550 2560 2010 2020 2030 3490 3550 3560 3600 3610 3010 3070 3130 3250 3820 3410 4010 4120 6050 6010 6020 6030 6040 6200 6320 6390 6480 6400 8010 8020 8390 8150 8030 9700 9710 9010 9020 7400 1900 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 1
    free_market       = 1
    professional_army = 10
    defense_lobby     = 6
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 4001 } # 米哈伊尔·伊万诺维奇·加里宁
  headofgovernment       = { type = 9 id = 4002 } # 约瑟夫·斯大林 
  foreignminister        = { type = 9 id = 4003 } # 马克西姆·李维诺夫 
  armamentminister       = { type = 9 id = 4004 } # 拉扎尔·卡冈诺维奇 
  ministerofsecurity     = { type = 9 id = 4005 } # 亨利希·雅格达 
  ministerofintelligence = { type = 9 id = 4006 } # 杨·贝尔辛 
  chiefofstaff           = { type = 9 id = 4007 } # 米哈伊尔·图哈切夫斯基 
  chiefofarmy            = { type = 9 id = 4008 } # 克利缅特·叶夫列莫维奇·伏罗希洛夫
  chiefofnavy            = { type = 9 id = 4009 } # 弗拉基米尔·奥尔洛夫 
  chiefofair             = { type = 9 id = 4010 } # 雅科夫·阿尔克斯尼斯
  dormant_ministers      = { }
  dormant_leaders        = { }
  dormant_teams          = { 3729 }

  landunit = {
    id       = { type = 10848 id = 10 }
    name     = "红军第1机械化军团 "
    location = 187
    division = {
      id             = { type = 10848 id = 11 }
      name           = "红军第163摩托化师 "
      type           = motorized
      model          = 19
      extra          = artillery
      strength       = 100
      experience     = 20
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 12 }
      name           = "红军第177步兵师 "
      type           = infantry
      model          = 19
      extra          = engineer
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 13 }
      name           = "红军第191步兵师 "
      type           = infantry
      model          = 19
      extra          = anti_tank
      brigade_model  = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 20 }
    name     = "苏联红军第7军团 "
    location = 152
    division = {
      id             = { type = 10848 id = 21 }
      name           = "红军第54步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 22 }
      name           = "红军第71步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 14 }
      name           = "红军第8'明斯克'步兵师 "
      type           = infantry
      model          = 19
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 30 }
    name     = "俄罗斯红军第14军团 "
    location = 191
    division = {
      id             = { type = 10848 id = 31 }
      name           = "红军第122步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 32 }
      name           = "红军第104步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 33 }
      name           = "红军第14'克里沃罗格'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 34 }
      name           = "红军第1坦克军 "
      type           = armor
      model          = 18
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 40 }
    name     = "乌克兰红军第22军团 "
    location = 216
    division = {
      id             = { type = 10848 id = 41 }
      name           = "红军第142步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 42 }
      name           = "红军第43步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 43 }
      name           = "红军第198摩托化师 "
      type           = motorized
      model          = 19
      extra          = anti_air
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 50 }
    name     = "苏联红军第8军团 "
    location = 219
    division = {
      id             = { type = 10848 id = 51 }
      name           = "红军第10步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 52 }
      name           = "红军第48步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 53 }
      name           = "红军第202摩托化师 "
      type           = motorized
      model          = 19
      extra          = engineer
      brigade_model  = 1
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 60 }
    name     = "苏联红军第11军团 "
    location = 220
    division = {
      id             = { type = 10848 id = 61 }
      name           = "红军第5'维切布斯克'步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 62 }
      name           = "红军第179步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 63 }
      name           = "红军第184步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 64 }
      name           = "红军第33'白俄罗斯'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 65 }
      name           = "红军第2坦克军 "
      type           = armor
      model          = 18
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 66 }
      name           = "红军第84摩托化师 "
      type           = motorized
      model          = 19
      extra          = armored_car
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 70 }
    name     = "高加索红军第27军团 "
    location = 272
    division = {
      id             = { type = 10848 id = 71 }
      name           = "红军第180步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 72 }
      name           = "红军第181步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 73 }
      name           = "红军第182步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 74 }
      name           = "红军第16'乌雅诺夫'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 75 }
      name           = "红军第3'蒂霍克恩'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 76 }
      name           = "红军第22'克拉斯诺达尔'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 80 }
    name     = "苏联红军第47军团 "
    location = 240
    division = {
      id             = { type = 10848 id = 81 }
      name           = "红军第143步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 82 }
      name           = "红军第121步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 83 }
      name           = "红军第55'库尔斯克'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 90 }
    name     = "红军第17机械化军团 "
    location = 175
    division = {
      id             = { type = 10848 id = 91 }
      name           = "红军第210摩托化师 "
      type           = motorized
      model          = 19
      extra          = artillery
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 100 }
    name     = "苏联红军第3军团 "
    location = 238
    division = {
      id             = { type = 10848 id = 101 }
      name           = "红军第27'鄂木斯克'步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 102 }
      name           = "红军第24'萨马洛·乌雅诺夫'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 103 }
      name           = "红军第17'格尔科夫'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 104 }
      name           = "红军第50'塔曼斯卡亚'步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 105 }
      name           = "红军第56'莫斯科芙思卡娅'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 106 }
      name           = "红军第85步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 110 }
    name     = "苏联红军第4军团 "
    location = 237
    division = {
      id             = { type = 10848 id = 111 }
      name           = "红军第6'奥廖尔'步兵师 "
      type           = infantry
      model          = 19
      extra          = armored_car
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 112 }
      name           = "红军第42步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 113 }
      name           = "红军第49步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 114 }
      name           = "红军第205摩托化师 "
      type           = motorized
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 120 }
    name     = "乌克兰红军第10军团 "
    location = 236
    division = {
      id             = { type = 10848 id = 121 }
      name           = "红军第86步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 122 }
      name           = "红军第13'达吉斯坦'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 123 }
      name           = "红军第2'白俄罗斯'步兵师 "
      type           = infantry
      model          = 19
      extra          = anti_tank
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 124 }
      name           = "红军第113步兵师 "
      type           = infantry
      model          = 19
      extra          = anti_air
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 125 }
      name           = "红军第8'明斯克'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 126 }
      name           = "红军第6'琼伽'骑兵师 "
      type           = cavalry
      model          = 24
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 127 }
      name           = "红军第4坦克军 "
      type           = armor
      model          = 18
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 128 }
      name           = "红军第29'西伯利亚'摩托师 "
      type           = motorized
      model          = 19
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 130 }
    name     = "苏联红军第13军团 "
    location = 234
    division = {
      id             = { type = 10848 id = 131 }
      name           = "红军第161步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 132 }
      name           = "红军第100步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 140 }
    name     = "伏尔加红军第31军团 "
    location = 253
    division = {
      id             = { type = 10848 id = 141 }
      name           = "红军第193步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 142 }
      name           = "红军第195步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 143 }
      name           = "红军第200步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 150 }
    name     = "乌克兰红军第36军团 "
    location = 1848
    division = {
      id             = { type = 10848 id = 151 }
      name           = "红军第140步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 152 }
      name           = "红军第146步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 153 }
      name           = "红军第228步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 160 }
    name     = "苏联红军第49军团 "
    location = 1850
    division = {
      id             = { type = 10848 id = 161 }
      name           = "红军第199步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 162 }
      name           = "红军第197'基辅'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 163 }
      name           = "红军第190步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 170 }
    name     = "苏联红军第55军团 "
    location = 1857
    division = {
      id             = { type = 10848 id = 171 }
      name           = "红军第189步兵师 "
      type           = infantry
      model          = 19
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 172 }
      name           = "红军第169步兵师 "
      type           = infantry
      model          = 19
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 173 }
      name           = "红军第130步兵师 "
      type           = infantry
      model          = 19
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10848 id = 180 }
    name     = "红军第15机械化军团 "
    location = 1370
    division = {
      id             = { type = 10848 id = 181 }
      name           = "红军第212摩托化师 "
      type           = motorized
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 190 }
    name     = "红军第24机械化军团 "
    location = 1520
    division = {
      id             = { type = 10848 id = 191 }
      name           = "红军第213摩托化师 "
      type           = motorized
      model          = 19
      extra          = armored_car
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 200 }
    name     = "苏联红军第5军团 "
    location = 1368
    division = {
      id             = { type = 10848 id = 201 }
      name           = "红军第45'沃伦'步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 202 }
      name           = "红军第87步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 203 }
      name           = "红军第62'土耳其斯坦'步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 210 }
    name     = "苏联红军第6军团 "
    location = 1372
    division = {
      id             = { type = 10848 id = 211 }
      name           = "红军第159步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 212 }
      name           = "红军第139步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 213 }
      name           = "红军第141步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 214 }
      name           = "红军第3'比萨拉比亚'骑兵师 "
      type           = cavalry
      model          = 24
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 215 }
      name           = "红军第81摩托化师 "
      type           = motorized
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 220 }
    name     = "波罗的海红军第12军团 "
    location = 258
    division = {
      id             = { type = 10848 id = 221 }
      name           = "红军第164步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 222 }
      name           = "红军第60山地步兵师 "
      type           = bergsjaeger
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 223 }
      name           = "红军第58山地步兵师 "
      type           = bergsjaeger
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 230 }
    name     = "乌拉尔红军第26军团 "
    location = 133
    division = {
      id             = { type = 10848 id = 231 }
      name           = "红军第99步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 232 }
      name           = "红军第173步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 233 }
      name           = "红军第240摩托化师 "
      type           = motorized
      model          = 19
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 240 }
    name     = "苏联红军第7军团 "
    location = 260
    division = {
      id             = { type = 10848 id = 241 }
      name           = "红军第116步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 242 }
      name           = "红军第196'红军第聂伯罗彼得罗夫'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 243 }
      name           = "红军第206步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 250 }
    name     = "苏联红军第19军团 "
    location = 247
    division = {
      id             = { type = 10848 id = 251 }
      name           = "红军第156步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 252 }
      name           = "红军第106步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 253 }
      name           = "红军第47步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 254 }
      name           = "红军第32骑兵师 "
      type           = cavalry
      model          = 24
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 260 }
    name     = "黑海红军第29军团 "
    location = 243
    division = {
      id             = { type = 10848 id = 261 }
      name           = "红军第176步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 262 }
      name           = "红军第25'恰巴耶夫'步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 263 }
      name           = "红军第74步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 264 }
      name           = "红军第51'彼列科夫'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 265 }
      name           = "红军第96'温尼琴科'山地步兵师 "
      type           = bergsjaeger
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 266 }
      name           = "红军第9'克里姆斯卡亚'骑兵师 "
      type           = cavalry
      model          = 24
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 267 }
      name           = "红军第15摩托化师 "
      type           = motorized
      model          = 19
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 270 }
    name     = "外高加索军管部队 "
    location = 1907
    division = {
      id             = { type = 10848 id = 271 }
      name           = "红军第136步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 272 }
      name           = "红军第138山地步兵师 "
      type           = bergsjaeger
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 273 }
      name           = "红军第47山地步兵师 "
      type           = bergsjaeger
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 274 }
      name           = "红军第77'阿塞拜疆'山地步兵师 "
      type           = bergsjaeger
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 275 }
      name           = "红军第63'格鲁吉亚'山地步兵师 "
      type           = bergsjaeger
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 276 }
      name           = "红军第24'克拉斯诺兹纳缅斯基'骑兵师 "
      type           = cavalry
      model          = 24
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 280 }
    name     = "红军第28机械化军团 "
    location = 277
    division = {
      id             = { type = 10848 id = 281 }
      name           = "红军第6坦克军 "
      type           = armor
      model          = 18
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 10848 id = 290 }
    name     = "阿尔汉格尔斯克军管部队 "
    location = 153
    division = {
      id             = { type = 10848 id = 291 }
      name           = "红军第88步兵师 "
      type           = infantry
      model          = 19
      extra          = anti_tank
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 5000 }
    name     = "克里姆林宫指挥部 "
    location = 175
    division = {
      id             = { type = 10848 id = 5001 }
      name           = "红军最高指挥部"
      type           = hq
      model          = 1
      extra          = b_09
      brigade_model  = 1
      strength       = 100
      experience     = 60
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 10848 id = 300 }
    name     = "莫斯科军管部队 "
    location = 175
    division = {
      id             = { type = 10848 id = 302 }
      name           = "红军第118步兵师 "
      type           = infantry
      model          = 19
      extra          = police
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 303 }
      name           = "红军第235步兵师 "
      type           = infantry
      model          = 19
      extra          = engineer
      brigade_model  = 1
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 310 }
    name     = "北高加索军管部队 "
    location = 1845
    division = {
      id             = { type = 10848 id = 311 }
      name           = "红军第157步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 312 }
      name           = "红军第28'戈尔斯科耶'山地步兵师 "
      type           = bergsjaeger
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 313 }
      name           = "红军第203摩托化师 "
      type           = motorized
      model          = 19
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 320 }
    name     = "奥廖尔军管部队 "
    location = 285
    division = {
      id             = { type = 10848 id = 321 }
      name           = "红军第19'沃罗涅什'步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 322 }
      name           = "红军第89步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 323 }
      name           = "红军第217步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 324 }
      name           = "红军第120步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 330 }
    name     = "中亚军管部队 "
    location = 1556
    division = {
      id             = { type = 10848 id = 331 }
      name           = "红军第68'土耳其斯坦'山地步兵师 "
      type           = bergsjaeger
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 332 }
      name           = "红军第20'普罗列塔东'山地步兵师 "
      type           = bergsjaeger
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 340 }
    name     = "贝加尔湖军管部队 "
    location = 1520
    division = {
      id             = { type = 10848 id = 341 }
      name           = "红军第65步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 342 }
      name           = "红军第114步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 343 }
      name           = "红军第93'哈尔科夫'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 344 }
      name           = "红军第94步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 350 }
    name     = "格鲁吉亚红军第17军团 "
    location = 1907
    division = {
      id             = { type = 10848 id = 351 }
      name           = "红军第82摩托化师 "
      type           = motorized
      model          = 19
      extra          = artillery
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 360 }
    name     = "苏联红军第1军团 "
    location = 1383
    division = {
      id             = { type = 10848 id = 361 }
      name           = "红军第39步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 362 }
      name           = "红军第26'兹拉托乌斯特'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 363 }
      name           = "红军第21'彼尔姆'步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 370 }
    name     = "乌克兰红军第21军团 "
    location = 1528
    division = {
      id             = { type = 10848 id = 371 }
      name           = "红军第59步兵师 "
      type           = infantry
      model          = 19
      extra          = anti_tank
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 372 }
      name           = "红军第22'克拉斯诺达尔'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 373 }
      name           = "红军第1步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 374 }
      name           = "红军第4'斯摩棱斯克'步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 375 }
      name           = "红军第5'戈罗多克'近卫步兵师 "
      type           = infantry
      model          = 19
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 376 }
      name           = "红军第239摩托化师 "
      type           = motorized
      model          = 19
      extra          = artillery
      strength       = 30
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 380 }
    name     = "远东特别部队 "
    location = 1523
    division = {
      id             = { type = 10848 id = 381 }
      name           = "红军第35'西伯利亚'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 382 }
      name           = "红军第66步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 383 }
      name           = "红军第101山地步兵师 "
      type           = bergsjaeger
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 390 }
    name     = "苏联红军第2军团 "
    location = 1827
    division = {
      id             = { type = 10848 id = 391 }
      name           = "红军第12步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 392 }
      name           = "红军第3'蒂霍克恩'步兵师 "
      type           = infantry
      model          = 19
      extra          = anti_air
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 400 }
    name     = "白俄罗斯红军第25军团 "
    location = 1570
    division = {
      id             = { type = 10848 id = 401 }
      name           = "红军第92步兵师 "
      type           = infantry
      model          = 19
      extra          = artillery
      brigade_model  = 1
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 10848 id = 402 }
      name           = "红军第32'萨拉托夫'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 403 }
      name           = "红军第40'博古察'步兵师 "
      type           = infantry
      model          = 19
      strength       = 80
    }
  }

  navalunit = {
    id       = { type = 10848 id = 410 }
    name     = "红旗北方舰队 "
    location = 133
    base     = 133
    division = {
      id             = { type = 10848 id = 411 }
      name           = "红军第1驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 412 }
      name           = "红军第1潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 413 }
      name           = "红军第2潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 414 }
      name           = "红军第18潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 415 }
      name           = "红军第19潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 416 }
      name           = "红军第20潜艇编队 "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10848 id = 420 }
    name     = "红旗波罗的海舰队 "
    location = 187
    base     = 187
    division = {
      id             = { type = 10848 id = 421 }
      name           = "玛拉号 "
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 422 }
      name           = "十月革命号 "
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 423 }
      name           = "红军第4驱逐舰编队 "
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 424 }
      name           = "红军第3潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 425 }
      name           = "红军第4潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 426 }
      name           = "红军第5潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 427 }
      name           = "红军第6潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 428 }
      name           = "红军第7潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 429 }
      name           = "红军第21潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 417 }
      name           = "红军第22潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 418 }
      name           = "红军第23潜艇编队 "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10848 id = 430 }
    name     = "红旗黑海舰队 "
    location = 253
    base     = 253
    division = {
      id             = { type = 10848 id = 431 }
      name           = "巴黎公社号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      extra3         = none
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 10848 id = 432 }
      name           = "红色高加索号 "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 10848 id = 433 }
      name           = "红色乌克兰号 "
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 434 }
      name           = "帕米亚特·梅克利亚号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 10848 id = 435 }
      name           = "伏龙芝号 "
      type           = battleship
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
      max_strength   = 60
    }
    division = {
      id             = { type = 10848 id = 436 }
      name           = "红军第5驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 437 }
      name           = "红军第11潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 438 }
      name           = "红军第24潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 439 }
      name           = "红军第25潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 448 }
      name           = "红军第8驱逐舰编队 "
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 449 }
      name           = "红军第9驱逐舰编队 "
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10848 id = 440 }
    name     = "红旗太平洋舰队 "
    location = 1372
    base     = 1372
    division = {
      id             = { type = 10848 id = 441 }
      name           = "红军第7驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 442 }
      name           = "红军第12潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 443 }
      name           = "红军第13潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 444 }
      name           = "红军第14潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 445 }
      name           = "红军第17潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 446 }
      name           = "红军第26潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 447 }
      name           = "红军第1运输舰编队 "
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 10848 id = 450 }
    name     = "苏维埃红军第I列宁格勒航空军 "
    location = 187
    base     = 187
    division = {
      id             = { type = 10848 id = 451 }
      name           = "红军第1歼击航空师 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 452 }
      name           = "红军第2歼击航空师 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 10848 id = 460 }
    name     = "苏维埃红军第II里加航空军 "
    location = 201
    base     = 201
    division = {
      id             = { type = 10848 id = 461 }
      name           = "红军第4歼击航空师 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 10848 id = 470 }
    name     = "苏维埃红军第III航空军 "
    location = 219
    base     = 219
    division = {
      id             = { type = 10848 id = 471 }
      name           = "红军第12轰炸航空师 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 472 }
      name           = "红军第13轰炸航空师 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 473 }
      name           = "红军第9歼击航空师 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 474 }
      name           = "红军第10歼击航空师 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 10848 id = 480 }
    name     = "苏维埃红军第IV基辅航空军 "
    location = 238
    base     = 238
    division = {
      id             = { type = 10848 id = 481 }
      name           = "红军第14歼击航空师 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 10848 id = 490 }
    name     = "苏维埃红军第V莫斯科航空军 "
    location = 175
    base     = 175
    division = {
      id             = { type = 10848 id = 491 }
      name           = "红军第6歼击航空师 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 10848 id = 492 }
    name     = "苏维埃红军第VI贝加尔湖航空军 "
    location = 1372
    base     = 1372
    division = {
      id             = { type = 10848 id = 493 }
      name           = "红军第30轰炸航空师 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 10848 id = 494 }
    name     = "苏维埃红军第VII彼得罗巴甫洛斯克航空军 "
    location = 1368
    base     = 1368
    division = {
      id             = { type = 10848 id = 495 }
      name           = "红军第29歼击航空师 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 496 }
      name           = "红军第33轰炸航空师 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
  }

  province_development = {
    id             = { type = 10848 id = 10000 }
    location       = 175
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10001 }
    location       = 163
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10002 }
    location       = 187
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10003 }
    location       = 1572
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10004 }
    location       = 1552
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10005 }
    location       = 1548
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10006 }
    location       = 1416
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10007 }
    location       = 249
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10008 }
    location       = 236
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10009 }
    location       = 1574
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10010 }
    location       = 1427
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10011 }
    location       = 1573
    cost           = 2.5000
    date           = { year = 1939 month = march day = 29 }
    manpower       = 6.0000
    size           = 6
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10012 }
    location       = 243
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10013 }
    location       = 1907
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 10848 id = 10014 }
    location       = 1593
    cost           = 2.5000
    date           = { year = 1939 month = march day = 29 }
    manpower       = 6.0000
    size           = 6
    type           = infrastructure
  }

  landdivision = { dormant = yes id = { type = 10848 id = 109 } name = "西方面军指挥部 "  type = hq model = 2 experience = 80 extra = b_09 brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 115 } name = "西南方面军指挥部 "  type = hq model = 2 experience = 80 extra = b_09 brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 108 } name = "波罗的海特别军区 "  type = hq model = 2 experience = 80 extra = b_09 brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 525 } name = "西方面军指挥部 "  type = hq model = 2 experience = 80 extra = b_09 brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 107 } name = "列宁格勒军区 "  type = hq model = 2 experience = 80 extra = b_09 brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 116 } name = "敖德萨军区 "  type = hq model = 2 experience = 80 extra = b_09 brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 526 } name = "克里米亚指挥部 "  type = hq model = 2 experience = 60 extra = b_09 brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 747 } name = "高加索山地红旗师 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 748 } name = "高加索山地红旗师 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 749 } name = "高加索山地红旗师 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 750 } name = "高加索山地红旗师 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 751 } name = "高加索山地红旗师 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 752 } name = "高加索山地红旗师 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 508 } name = "奔萨要塞 "  type = garrison model = 2 experience = 80 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 766 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 767 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 768 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 769 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 770 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 771 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 772 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 773 } name = "古比雪夫要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 774 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 775 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 776 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 777 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 778 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 779 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 780 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 781 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 782 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 783 } name = "伏尔加河要塞群 "  type = garrison model = 2 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 500 } name = "莫斯科要塞守卫师"  type = garrison model = 4 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 501 } name = "克里姆林宫卫队 "  type = garrison model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 502 } name = "列宁格勒要塞守卫师 "  type = garrison model = 4 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 715 } name = "基洛夫要塞群 "  type = garrison model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 503 } name = "斯大林格勒要塞守卫师 "  type = garrison model = 4 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 716 } name = "伏尔加河要塞群 "  type = garrison model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 510 } name = "海参崴要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 504 } name = "列宁区要塞守卫师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 506 } name = "巴库油田要塞群 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 457 } name = "红军山地红旗师 "  type = bergsjaeger model = 4 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 458 } name = "红军山地红旗师 "  type = bergsjaeger model = 4 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 459 } name = "红军山地红旗师 "  type = bergsjaeger model = 4 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 462 } name = "红军山地红旗师 "  type = bergsjaeger model = 4 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 463 } name = "红军山地红旗师 "  type = bergsjaeger model = 4 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 577 } name = "高尔基I号守卫师 "  type = garrison model = 3 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 578 } name = "高尔基II号守卫师 "  type = garrison model = 3 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 788 } name = "布列斯特要塞群 "  type = garrison model = 1 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 45 } name = "㊣苏维埃最高统帅部 "  type = hq model = 2 experience = 80 extra = b_09 brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 46 } name = "㊣苏维埃最高统帅部直属近卫师 "  type = mechanized model = 6 experience = 80 extra = sp_rct_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 10848 id = 47 } name = "㊣苏维埃最高统帅部直属坦克师 "  type = light_armor model = 10 experience = 80 extra = sp_rct_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 10848 id = 717 } name = "车里亚宾斯克要塞群 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 507 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 718 } name = "鄂木斯克要塞师 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 719 } name = "鄂木斯克守备师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 505 } name = "斯维尔德罗夫斯克要塞群 "  type = garrison model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 523 } name = "叶卡捷琳堡要塞群 "  type = garrison model = 4 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 514 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 515 } name = "新西伯利亚要塞群 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 517 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 518 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 519 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 520 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 521 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 524 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 789 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 790 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 792 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 793 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 794 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 795 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 796 } name = "中心防线要塞师 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 785 } name = "土库曼斯坦要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 786 } name = "土库曼斯坦要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 787 } name = "土库曼斯坦要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 800 } name = "土库曼斯坦要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 801 } name = "土库曼斯坦要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 802 } name = "土库曼斯坦要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 803 } name = "土库曼斯坦要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 804 } name = "土库曼斯坦要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 805 } name = "卫戍装甲师 "  type = armor model = 20 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 806 } name = "卫戍装甲师 "  type = armor model = 20 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 807 } name = "卫戍装甲师 "  type = armor model = 20 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 808 } name = "卫戍装甲师 "  type = armor model = 20 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 809 } name = "卫戍装甲师 "  type = armor model = 20 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 810 } name = "卫戍装甲师 "  type = armor model = 20 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 811 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 812 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 813 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 814 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 815 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 816 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 817 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 818 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 819 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 820 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 821 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 822 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 823 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 824 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 825 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 826 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 827 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 828 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 829 } name = "卫戍装甲师 "  type = armor model = 21 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 

  navaldivision = { dormant = yes id = { type = 10848 id = 726 } name = "苏联号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 }
  navaldivision = { dormant = yes id = { type = 10848 id = 727 } name = "苏维埃乌克兰号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 }
  navaldivision = { dormant = yes id = { type = 10848 id = 728 } name = "喀琅施塔得号 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 }
  navaldivision = { dormant = yes id = { type = 10848 id = 729 } name = "塞瓦斯托波尔号 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 }
  navaldivision = { dormant = yes id = { type = 10848 id = 830 } name = "列宁号 " type = carrier model = 1 extra1 = cag brigade_model1 = 1 strength = 80 }
  navaldivision = { dormant = yes id = { type = 10848 id = 831 } name = "卡尔·马克思号 " type = carrier model = 1 extra1 = cag brigade_model1 = 1 strength = 80 }
}
