##############################
# Country definition for JAP #
##############################
province = {
  id = 1178 # 函館
}
province = {
  id = 1180 # 仙台
}
province = {
  id = 1183 # 新瀉
}
province = {
  id = 1184 # 東京都
}
province = {
  id = 1185 # 名古屋
}
province = {
  id = 1186 # 京都府—舞鶴港
}
province = {
  id = 1187 # 大阪
}
province = {
  id = 1188 # 広島—吳港
}
province = {
  id = 1189 # 高知
}
province = {
  id = 1191 # 鹿兒島
}
province = {
  id = 1193 # 沖繩（那霸）
  supplypool = 1000
  oilpool = 100
}
province = {
  id = 1196 # 釜山
  supplypool = 5000
  oilpool = 100
}
province = {
  id = 1199 # 漢城
}
province = {
  id = 1200 # 元山
}
province = {
  id = 1202 # 大連
}
province = {
  id = 1203 # 唐山
  supplypool = 4000
  oilpool = 2000
}
province = {
  id = 1322 # 高雄
  supplypool = 1000
  oilpool = 100
}
province = {
  id = 1323 # 台北
}
province = {
  id = 1393 # 新義州
}
province = {
  id = 1599 # 硫黄島
  supplypool = 500
}
province = { id = 1601 supplypool = 500 } # 埃尼威托克环礁
province = {
  id = 1605 # 马朱罗环礁
  supplypool = 500
}
province = {
  id = 1608 # 夸贾林环礁
  supplypool = 500
}
province = { id = 1610 supplypool = 500 } # 波纳佩岛
province = {
  id = 1613 # 特鲁克群岛
  supplypool = 5000
  oilpool = 500
}
province = { id = 1618 supplypool = 500 } # 乌利西环礁
province = {
  id = 1621 # 帕劳群岛
  supplypool = 500
}
province = {
  id = 1627 # 塞班島
  supplypool = 500
  oilpool = 100
}
province = { id = 1784 supplypool = 500 } # 小笠原諸島
province = { id = 1785 supplypool = 500 } # 南鳥島（馬爾庫斯島）
province = {
  id = 2930 # 旅順港
  coastalfort = 5
  supplypool = 1000
  oilpool = 500
}
province = {
  id = 3656 # 橫濱—橫須賀港
  anti_air = 5
}
province = {
  id = 3666 # 長崎—佐世保港
}

#####################
# Country main data #
#####################

country = {
  tag                = JAP
  belligerence       = 10
  capital            = 1184 # 東京都
  manpower           = 1500
  tc_mod                 = 1
  research_mod           = 1.1
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 1000
  money          = 400
  transports     = 1500
  escorts        = 500

  diplomacy = {
    relation = { tag = BEL value = -25 }
    relation = { tag = CGX value = -75 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CHL value = 20 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = ENG value = -25 }
    relation = { tag = ETH value = 35 }
    relation = { tag = FIN value = 20 }
    relation = { tag = FRA value = -20 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = -50 }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = PHI value = 1 }
    relation = { tag = SIA value = 75 }
    relation = { tag = SOV value = -10 }
    relation = { tag = USA value = 15 }
    relation = { tag = U01 value = -75 }
  }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }

  nationalprovinces      = { 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1197 1198 1199 1200 1201 1376 1391 1392 1393 1599 1784 1785 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 3682 3683 3684 3685 3686 3687 3688 3689 3690 1322 1323 1324 2990 2991 2605 2995 }
  ownedprovinces         = { 1174 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1197 1198 1199 1200 1201 1202 1203 1322 1323 1324 1376 1386 1391 1392 1393 1398 1599 1600 1601 1602 1603 1604 1605 1606 1607 1608 1609 1610 1612 1613 1615 1616 1617 1618 1619 1620 1621 1625 1626 1627 1784 1785 2605 2875 2930 2939 2941 2942 2943 2945 2946 2990 2991 2995 3587 3588 3589 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 3682 3683 3684 3685 3686 3687 3688 3689 3690 2874 2673 }
  controlledprovinces    = { 1174 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1197 1198 1199 1200 1201 1202 1203 1322 1323 1324 1376 1386 1391 1392 1393 1398 1599 1600 1601 1602 1603 1604 1605 1606 1607 1608 1609 1610 1612 1613 1615 1616 1617 1618 1619 1620 1621 1625 1626 1627 1784 1785 2605 2875 2930 2939 2941 2942 2943 2945 2946 2990 2991 2995 3587 3588 3589 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 3682 3683 3684 3685 3686 3687 3688 3689 3690 2874 2673 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5090 5060 5200 5810 5120 5180 5660 5670 5680 5310 5010 1010 1020 1100 1110 1710 1830 1840 1850 2280 2290 2610 2300 2620 2420 2540 2550 2010 2020 3490 3550 3560 3600 3610 3620 3010 3020 3070 3080 3130 3140 3250 3260 3320 3330 3650 3820 3410 3420 3760 4120 4010 4020 6050 6010 6020 6030 6040 6200 6320 6390 6480 6400 8010 8020 8390 8150 8030 8040 8200 8160 8530 8540 9700 9710 9010 9020 7400 8410 8640 8400 6270 6230 6250 6260 }
  inventions             = { 8013 8020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 5001 } # 昭和天皇陛下 裕仁 
  headofgovernment       = { type = 9 id = 5002 } # 冈田启介 
  foreignminister        = { type = 9 id = 5003 } # 広田弘毅 
  armamentminister       = { type = 9 id = 5004 } # 町田忠治 
  ministerofsecurity     = { type = 9 id = 5005 } # 后藤文夫 
  ministerofintelligence = { type = 9 id = 5006 } # 冈村寧次 
  chiefofstaff           = { type = 9 id = 5007 } # 閑院宮載仁親王 
  chiefofarmy            = { type = 9 id = 5008 } # 閑院宮載仁親王 
  chiefofnavy            = { type = 9 id = 5009 } # 伏见宫博恭王 
  chiefofair             = { type = 9 id = 5010 } # 山本五十六 

  landunit = {
    id       = { type = 13016 id = 2000 }
    name     = "大日本帝國関東軍 "
    location = 1390
    division = {
      id             = { type = 13016 id = 501 }
      name           = "関東軍司令部 "
      type           = hq
      model          = 1
      extra          = b_09
      brigade_model  = 1
      strength       = 100
      experience     = 80
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 502 }
      name           = "関東州警備司令部 "
      type           = infantry
      model          = 56
      extra          = police
      brigade_model  = 1
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 503 }
      name           = "大陸鐵道司令部 "
      type           = infantry
      model          = 56
      extra          = police
      brigade_model  = 1
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 2001 }
    name     = "帝國陸軍第1“東京”甲種師団 "
    location = 1203
    division = {
      id             = { type = 13016 id = 504 }
      name           = "東京師団第1歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      max_strength   = 100
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 505 }
      name           = "東京師団第2歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 506 }
      name           = "東京師団騎兵第1旅団 "
      type           = cavalry
      model          = 82
      extra          = artillery
      brigade_model  = 2
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 507 }
      name           = "東京師団第騎兵2旅団 "
      type           = cavalry
      model          = 82
      extra          = artillery
      brigade_model  = 2
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 2002 }
    name     = "帝國陸軍第2“仙台”甲種師団  "
    location = 1203
    leader   = 101141
    division = {
      id             = { type = 13016 id = 508 }
      name           = "仙台師団第3歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
    division = {
      id             = { type = 13016 id = 509 }
      name           = "仙台師団第4歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 2004 }
    name     = "帝國陸軍第4“大阪”甲種師団 "
    location = 1374
    leader   = 101374
    division = {
      id             = { type = 13016 id = 510 }
      name           = "大阪師団第7歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 511 }
      name           = "大阪師団第8歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 2012 }
    name     = "帝國陸軍第12“小倉”甲種師団 "
    location = 2673
    leader   = 101200
    division = {
      id             = { type = 13016 id = 514 }
      name           = "小倉師団第23歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 515 }
      name           = "小倉師団第24歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 519 }
      name           = "小倉師団騎兵第3旅団 "
      type           = cavalry
      model          = 82
      extra          = artillery
      brigade_model  = 2
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 520 }
    name     = "関東軍騎兵集団 "
    location = 1386
    leader   = 101372
    division = {
      id             = { type = 13016 id = 521 }
      name           = "関東軍騎兵第4旅団 "
      type           = cavalry
      model          = 81
      extra          = light_armor_brigade
      brigade_model  = 4
      experience     = 40
    }
    division = {
      id             = { type = 13016 id = 522 }
      name           = "関東軍騎兵第5旅団 "
      type           = cavalry
      model          = 81
      extra          = light_armor_brigade
      brigade_model  = 4
      experience     = 40
    }
    division = {
      id             = { type = 13016 id = 523 }
      name           = "関東軍騎兵第6旅団 "
      type           = cavalry
      model          = 81
      extra          = light_armor_brigade
      brigade_model  = 4
      experience     = 40
    }
    division = {
      id             = { type = 13016 id = 524 }
      name           = "関東軍騎兵集団騎砲兵大隊 "
      type           = cavalry
      model          = 81
      extra          = artillery
      brigade_model  = 2
      experience     = 40
    }
    division = {
      id             = { type = 13016 id = 525 }
      name           = "関東軍騎兵集団戰車隊 "
      type           = armor
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 13016 id = 526 }
    name     = "中國驻屯軍 "
    location = 1202
    leader   = 101177
    division = {
      id             = { type = 13016 id = 532 }
      name           = "中國駐屯軍混成1旅団 "
      type           = infantry
      model          = 56
      extra          = artillery
      brigade_model  = 2
      experience     = 40
    }
    division = {
      id             = { type = 13016 id = 5320 }
      name           = "中國駐屯軍混成2旅団 "
      type           = infantry
      model          = 56
      extra          = artillery
      brigade_model  = 2
      experience     = 40
    }
    division = {
      id             = { type = 13016 id = 552 }
      name           = "関東殖墾防衛旅団 "
      type           = infantry
      model          = 56
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 13016 id = 545 }
    name     = "帝國陸軍独立混成第1旅団 "
    location = 2874
    leader   = 101370
    division = {
      id             = { type = 13016 id = 546 }
      name           = "陸軍第1独立混成旅団 "
      type           = bergsjaeger
      model          = 0
      extra          = engineer
      brigade_model  = 1
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 5460 }
      name           = "陸軍第2独立混成旅団 "
      type           = bergsjaeger
      model          = 0
      extra          = engineer
      brigade_model  = 1
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 547 }
    name     = "帝國陸軍独立混成第2旅団 "
    location = 2942
    leader   = 101373
    division = {
      id             = { type = 13016 id = 548 }
      name           = "陸軍第3独立混成旅団 "
      type           = bergsjaeger
      model          = 0
      extra          = engineer
      brigade_model  = 1
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 5480 }
      name           = "陸軍第4独立混成旅団 "
      type           = bergsjaeger
      model          = 0
      extra          = engineer
      brigade_model  = 1
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 549 }
    name     = "锦州宪兵司令部 "
    location = 1396
    leader   = 101197
    division = {
      id             = { type = 13016 id = 551 }
      name           = "錦州守備队 "
      type           = infantry
      model          = 56
      extra          = police
      brigade_model  = 1
      strength       = 100
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 553 }
    name     = "日本帝國台灣軍 "
    location = 1323
    division = {
      id             = { type = 13016 id = 554 }
      name           = "台灣步兵混成旅団 "
      type           = infantry
      model          = 56
      extra          = police
      brigade_model  = 1
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 555 }
    name     = "日本帝國朝鮮軍 "
    location = 1199
    leader   = 101101
    division = {
      id             = { type = 13016 id = 556 }
      name           = "朝鮮軍司令部"
      type           = hq
      model          = 1
      extra          = b_09
      brigade_model  = 1
      strength       = 100
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 2019 }
    name     = "帝國陸軍第19“羅南”甲種師団 "
    location = 1376
    leader   = 101375
    division = {
      id             = { type = 13016 id = 557 }
      name           = "羅南師団第37歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 558 }
      name           = "羅南師団第38歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 2020 }
    name     = "帝國陸軍第20“龍山”甲種師団 "
    location = 1199
    leader   = 101085
    division = {
      id             = { type = 13016 id = 559 }
      name           = "龍山師団第39歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 40
    }
    division = {
      id             = { type = 13016 id = 560 }
      name           = "龍山師団第40歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 13016 id = 2021 }
    name     = "日本帝國大本營 "
    location = 1184
    division = {
      id             = { type = 13016 id = 565 }
      name           = "帝國參謀本部 "
      type           = hq
      model          = 1
      extra          = b_09
      brigade_model  = 2
      strength       = 100
      experience     = 100
    }
    division = {
      id             = { type = 13016 id = 603 }
      name           = "東京灣要塞重砲聯隊 "
      type           = garrison
      model          = 3
      extra          = b_09
      brigade_model  = 3
      strength       = 100
      experience     = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 2022 }
    name     = "帝國陸軍“近衛”師団 "
    location = 1184
    leader   = 101132
    division = {
      id             = { type = 13016 id = 566 }
      name           = "近衛第1步兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
    division = {
      id             = { type = 13016 id = 567 }
      name           = "近衛第2步兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
    division = {
      id             = { type = 13016 id = 568 }
      name           = "近衛騎兵第8旅団 "
      type           = cavalry
      model          = 83
      extra          = artillery
      brigade_model  = 3
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 2003 }
    name     = "帝國陸軍第3“名古屋”甲種師団 "
    location = 2943
    division = {
      id             = { type = 13016 id = 569 }
      name           = "名古屋師団第5歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
    division = {
      id             = { type = 13016 id = 570 }
      name           = "名古屋師団第29歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
    division = {
      id             = { type = 13016 id = 571 }
      name           = "名古屋師団騎兵第9旅団 "
      type           = cavalry
      model          = 83
      extra          = artillery
      brigade_model  = 3
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 590 }
    name     = "帝國陸軍第5“廣島”甲種師団 "
    location = 1188
    leader   = 101070
    division = {
      id             = { type = 13016 id = 591 }
      name           = "廣島師団第9歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
    division = {
      id             = { type = 13016 id = 592 }
      name           = "廣島師団第21歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 595 }
    name     = "帝國陸軍第6“熊本”甲種師団 "
    location = 1191
    leader   = 101176
    division = {
      id             = { type = 13016 id = 596 }
      name           = "熊本師団第11歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
    division = {
      id             = { type = 13016 id = 597 }
      name           = "熊本師団第12歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 600 }
    name     = "帝國陸軍第7“旭川”甲種師団 "
    location = 2946
    leader   = 101377
    division = {
      id             = { type = 13016 id = 601 }
      name           = "旭川師団第13歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 602 }
      name           = "旭川師団第14歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 2008 }
    name     = "帝國陸軍第8“弘前”甲種師団 "
    location = 1181
    division = {
      id             = { type = 13016 id = 605 }
      name           = "弘前師団第15歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 606 }
      name           = "弘前師団第16歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 2009 }
    name     = "帝國陸軍第9“金澤”甲種師団 "
    location = 1186
    division = {
      id             = { type = 13016 id = 607 }
      name           = "金澤師団第17歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 608 }
      name           = "金澤師団第18歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 2010 }
    name     = "帝國陸軍第10“姬路”甲種師団 "
    location = 1203
    leader   = 101067
    division = {
      id             = { type = 13016 id = 609 }
      name           = "姬路師団第19歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
    division = {
      id             = { type = 13016 id = 610 }
      name           = "姬路師団第20歩兵旅団 "
      type           = mechanized
      model          = 37
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 2011 }
    name     = "帝國陸軍第11“善通寺”甲種師団 "
    location = 1189
    leader   = 101170
    division = {
      id             = { type = 13016 id = 611 }
      name           = "善通寺師団第21歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 612 }
      name           = "善通寺師団第22歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 2014 }
    name     = "帝國陸軍第14“宇都宮”甲種師団 "
    location = 1182
    leader   = 101021
    division = {
      id             = { type = 13016 id = 613 }
      name           = "宇都宮師団第27歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 614 }
      name           = "宇都宮師団第28歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 2016 }
    name     = "帝國陸軍第16“京都”甲種師団 "
    location = 1190
    division = {
      id             = { type = 13016 id = 615 }
      name           = "京都師団第31歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
    division = {
      id             = { type = 13016 id = 616 }
      name           = "京都師団第32歩兵旅団 "
      type           = motorized
      model          = 56
      extra          = light_armor_brigade
      brigade_model  = 5
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 2437 }
    name     = "帝國陸軍高雄守備司令部"
    location = 1322
    division = {
      id             = { type = 13016 id = 2438 }
      name           = "帝國陸軍台湾守備隊"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 2439 }
    name     = "帝國陸軍冲绳守備司令部"
    location = 1193
    division = {
      id             = { type = 13016 id = 2440 }
      name           = "帝國陸軍冲绳守備隊"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 2441 }
    name     = "帝國陸軍特鲁克守備司令部"
    location = 1613
    division = {
      id             = { type = 13016 id = 2442 }
      name           = "帝國陸軍特鲁克守備隊"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 2443 }
    name     = "帝國陸軍塞班岛守備司令部"
    location = 1627
    division = {
      id             = { type = 13016 id = 2444 }
      name           = "帝國陸軍塞班岛守備隊"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 2445 }
    name     = "帝國陸軍硫磺岛守備司令部"
    location = 1599
    division = {
      id             = { type = 13016 id = 2446 }
      name           = "帝國陸軍硫磺岛守備隊"
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 535 }
    name     = "帝國陸軍夸贾林环礁守備司令部 "
    location = 1608
    division = {
      id             = { type = 13016 id = 536 }
      name           = "帝國陸軍夸贾林环礁守備隊 "
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 537 }
    name     = "帝國陸軍马朱罗环礁守備司令部 "
    location = 1605
    division = {
      id             = { type = 13016 id = 538 }
      name           = "帝國陸軍马朱罗环礁守備隊 "
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 539 }
    name     = "帝國陸軍帕劳群岛守備司令部 "
    location = 1621
    division = {
      id             = { type = 13016 id = 540 }
      name           = "帝國陸軍帕劳群岛守備隊 "
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 541 }
    name     = "帝國陸軍北海道守備司令部 "
    location = 1179
    division = {
      id             = { type = 13016 id = 542 }
      name           = "帝國陸軍北海道守備隊 "
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 543 }
    name     = "帝國陸軍对马岛守備司令部 "
    location = 3685
    division = {
      id             = { type = 13016 id = 544 }
      name           = "帝國陸軍对马岛守備隊 "
      type           = infantry
      model          = 1
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 13016 id = 1000 }
    name     = "日本聯合艦隊直属本隊 "
    location = 1184
    base     = 1184
    leader   = 101296
    division = {
      id             = { type = 13016 id = 1011 }
      name           = "長門號 "
      type           = battleship
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_radar_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 0
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1012 }
      name           = "陸奥號 "
      type           = battleship
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_radar_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 0
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1009 }
      name           = "矢風 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1001 }
    name     = "日本聯合艦隊第1艦隊 "
    location = 1184
    base     = 1184
    leader   = 101258
    division = {
      id             = { type = 13016 id = 1013 }
      name           = "伊勢號 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1014 }
      name           = "日向號 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1015 }
      name           = "扶桑號 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1016 }
      name           = "山城號 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1017 }
      name           = "金剛號 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1018 }
      name           = "榛名號 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1019 }
      name           = "霧島號 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1020 }
      name           = "比叡號 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = b_13
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1021 }
      name           = "青葉號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1022 }
      name           = "衣笠號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1023 }
      name           = "古鷹號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1024 }
      name           = "加古號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 10300 id = 21401 }
      name           = "龍驤號 "
      type           = escort_carrier
      model          = 0
      extra1         = b_01
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 21402 }
      name           = "鳳翔號 "
      type           = escort_carrier
      model          = 0
      extra1         = b_01
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1025 }
      name           = "阿武隈號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1026 }
      name           = "北上號 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1027 }
      name           = "大井號 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1028 }
      name           = "三日月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1029 }
      name           = "夕風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1030 }
      name           = "雷號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1031 }
      name           = "電號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1032 }
      name           = "響號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1033 }
      name           = "曉號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1034 }
      name           = "初春號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1035 }
      name           = "子日號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1036 }
      name           = "初霜號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1037 }
      name           = "若葉號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1038 }
      name           = "有明號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1039 }
      name           = "夕暮號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1040 }
      name           = "川內號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1041 }
      name           = "吹雪號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1042 }
      name           = "白雪號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1043 }
      name           = "初雪號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1044 }
      name           = "叢云號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1045 }
      name           = "東云號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1046 }
      name           = "白雲號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1047 }
      name           = "浦波號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1048 }
      name           = "绫波號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1049 }
      name           = "敷波號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1050 }
      name           = "磯波號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1051 }
      name           = "天霧號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1052 }
      name           = "朝霧號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1053 }
      name           = "夕霧號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1054 }
      name           = "狹霧號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1002 }
    name     = "日本聯合艦隊第2艦隊 "
    location = 1184
    base     = 1184
    leader   = 101300
    division = {
      id             = { type = 13016 id = 1055 }
      name           = "高雄號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1056 }
      name           = "愛宕號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1057 }
      name           = "鳥海號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1058 }
      name           = "摩耶號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1059 }
      name           = "那智號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_torpedoes_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1060 }
      name           = "羽黒號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_torpedoes_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1061 }
      name           = "妙高號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_torpedoes_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1062 }
      name           = "最上號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1063 }
      name           = "三隈號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1064 }
      name           = "神通號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1065 }
      name           = "那珂號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1066 }
      name           = "村雨號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1067 }
      name           = "夕立號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1068 }
      name           = "春雨號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1069 }
      name           = "五月雨號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1003 }
    name     = "日本聯合艦隊第3艦隊 "
    location = 1188
    base     = 1188
    leader   = 101227
    division = {
      id             = { type = 13016 id = 1070 }
      name           = "足柄號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_torpedoes_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1071 }
      name           = "長良號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1072 }
      name           = "球磨號 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1073 }
      name           = "名取號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1074 }
      name           = "皐月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1075 }
      name           = "文月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1076 }
      name           = "長月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1077 }
      name           = "水無月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1078 }
      name           = "朝風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1079 }
      name           = "春風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1080 }
      name           = "松風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1081 }
      name           = "旗風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1082 }
      name           = "伊-121號 "
      type           = submarine
      model          = 0
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 13016 id = 1083 }
      name           = "伊-122號 "
      type           = submarine
      model          = 0
      extra1         = naval_torpedoes_s
    }
    division = {
      id             = { type = 13016 id = 1084 }
      name           = "伊-123號 "
      type           = submarine
      model          = 0
      extra1         = naval_torpedoes_s
    }
    division = {
      id             = { type = 13016 id = 1085 }
      name           = "伊-124號 "
      type           = submarine
      model          = 0
      extra1         = naval_torpedoes_s
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1004 }
    name     = "日本聯合艦隊第4艦隊 "
    location = 1184
    base     = 1184
    leader   = 101234
    division = {
      id             = { type = 13016 id = 1086 }
      name           = "天龍號 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1087 }
      name           = "龍田號 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1088 }
      name           = "夕張號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1089 }
      name           = "睦月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1090 }
      name           = "如月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1091 }
      name           = "彌生號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1092 }
      name           = "望月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1093 }
      name           = "追風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1094 }
      name           = "疾風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1095 }
      name           = "朝凪號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1096 }
      name           = "夕凪號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1097 }
      name           = "呂-60號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1098 }
      name           = "呂-61號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1099 }
      name           = "呂-62號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1100 }
      name           = "呂-63號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1101 }
      name           = "呂-64號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1102 }
      name           = "呂-65號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1103 }
      name           = "呂-66號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1104 }
      name           = "呂-67號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1105 }
      name           = "呂-68號 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1005 }
    name     = "日本聯合艦隊第5艦隊 "
    location = 1188
    base     = 1188
    leader   = 101231
    division = {
      id             = { type = 13016 id = 1106 }
      name           = "多摩號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_torpedoes_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1107 }
      name           = "木曾號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_torpedoes_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1200 }
    name     = "日本聯合艦隊南遣艦隊 "
    location = 1189
    base     = 1189
    leader   = 101273
    division = {
      id             = { type = 13016 id = 1108 }
      name           = "鬼怒號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_torpedoes_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1109 }
      name           = "由良號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_torpedoes_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1110 }
      name           = "伊-53號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1111 }
      name           = "伊-54號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1112 }
      name           = "伊-55號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1113 }
      name           = "伊-56號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1114 }
      name           = "伊-57號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1115 }
      name           = "伊-58號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1116 }
      name           = "伊-59號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1117 }
      name           = "伊-60號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1118 }
      name           = "伊-62號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1119 }
      name           = "伊-64號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1120 }
      name           = "伊-65號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1121 }
      name           = "伊-68號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1122 }
      name           = "呂-33號 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1123 }
      name           = "呂-34號 "
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1201 }
    name     = "日本聯合艦隊第1航空艦隊 "
    location = 1184
    base     = 1184
    leader   = 101259
    division = {
      id             = { type = 13016 id = 1124 }
      name           = "赤城號 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1125 }
      name           = "加賀號 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1127 }
      name           = "五十鈴號 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1128 }
      name           = "川内號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1129 }
      name           = "菊月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1130 }
      name           = "夕月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1131 }
      name           = "卯月號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1132 }
      name           = "朧號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1133 }
      name           = "曙號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1134 }
      name           = "潮號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1135 }
      name           = "漣號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1136 }
      name           = "汐風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1137 }
      name           = "帆風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1138 }
      name           = "朧號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1202 }
    name     = "日本聯合艦隊第6潜水艦隊 "
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1139 }
      name           = "伊-1號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1140 }
      name           = "伊-2號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1141 }
      name           = "伊-3號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1142 }
      name           = "伊-4號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1143 }
      name           = "伊-5號 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1144 }
      name           = "伊-6號 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1145 }
      name           = "伊-7號 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1146 }
      name           = "伊-8號 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1147 }
      name           = "伊-68號 "
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 13016 id = 1148 }
      name           = "伊-69號 "
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 13016 id = 1149 }
      name           = "伊-70號 "
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 13016 id = 1150 }
      name           = "伊-71號 "
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1203 }
    name     = "日本聯合艦隊第1运输支隊 "
    location = 1187
    base     = 1187
    division = {
      id             = { type = 13016 id = 1151 }
      name           = "峰風號 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1152 }
      name           = "朝陽丸號 "
      type           = transport
      model          = 0
      experience     = 10
    }
    division = {
      id             = { type = 13016 id = 1153 }
      name           = "観光丸號 "
      type           = transport
      model          = 0
      experience     = 10
    }
    division = {
      id             = { type = 13016 id = 1154 }
      name           = "咸臨丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1155 }
      name           = "鳳凰丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1156 }
      name           = "立象丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1157 }
      name           = "快風丸號 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1204 }
    name     = "日本聯合艦隊第2运输支隊 "
    location = 1187
    base     = 1187
    division = {
      id             = { type = 13016 id = 1158 }
      name           = "沖風號 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1159 }
      name           = "開運丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1160 }
      name           = "長鯨丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1161 }
      name           = "大坂丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1162 }
      name           = "虹橋船號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1163 }
      name           = "行速丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1164 }
      name           = "東京丸號 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1180 }
    name     = "日本聯合艦隊第3运输支隊 "
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1181 }
      name           = "千早號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1182 }
      name           = "函容丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1183 }
      name           = "樺太丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1184 }
      name           = "華陽丸號 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1190 }
    name     = "日本聯合艦隊第4运输支隊 "
    location = 1188
    base     = 1188
    division = {
      id             = { type = 13016 id = 1191 }
      name           = "曙丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1192 }
      name           = "龍田丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1193 }
      name           = "新田丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1194 }
      name           = "日出丸號 "
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 13016 id = 1500 }
    name     = "帝國陸軍第1零戰飛行団  "
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1501 }
      name           = "第1零戰飛行聯隊 "
      type           = interceptor
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1502 }
      name           = "第2零戰飛行聯隊 "
      type           = interceptor
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1503 }
      name           = "第3零戰飛行聯隊 "
      type           = interceptor
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1504 }
      name           = "第4飛行聯隊 "
      type           = interceptor
      model          = 0
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1505 }
    name     = "帝國陸軍第1零戰飛行団濱松基地  "
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1506 }
      name           = "第7零戰飛行聯隊 "
      type           = interceptor
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1507 }
      name           = "第13飛行聯隊 "
      type           = interceptor
      model          = 1
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1510 }
    name     = "帝國陸軍第2輕爆擊機飛行団  "
    location = 1196
    base     = 1196
    division = {
      id             = { type = 13016 id = 1508 }
      name           = "第6輕爆擊機飛行聯隊 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1509 }
      name           = "第9輕爆擊機飛行聯隊 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1521 }
    name     = "日本第3艦爆機飛行団  "
    location = 1322
    base     = 1322
    division = {
      id             = { type = 13016 id = 1511 }
      name           = "第8艦爆機飛行聯隊 "
      type           = naval_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1512 }
      name           = "第14艦爆機飛行聯隊 "
      type           = naval_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1530 }
    name     = "陸軍航空兵団直屬聯隊 "
    location = 1390
    base     = 1390
    division = {
      id             = { type = 13016 id = 1513 }
      name           = "第4零戰飛行聯隊 "
      type           = interceptor
      model          = 1
      strength       = 85
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1514 }
      name           = "第5輕爆撃機聯隊 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 85
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1535 }
    name     = "関東飛行集団 "
    location = 1390
    base     = 1390
    division = {
      id             = { type = 13016 id = 1515 }
      name           = "第12零戰飛行聯隊 "
      type           = interceptor
      model          = 1
      strength       = 85
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1516 }
      name           = "第15輕爆擊機聯隊 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 85
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1517 }
      name           = "第16輕爆擊機聯隊 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 85
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1518 }
    name     = "第四零戰飛行団 "
    location = 1390
    base     = 1390
    division = {
      id             = { type = 13016 id = 1519 }
      name           = "第10零戰飛行聯隊 "
      type           = interceptor
      model          = 1
      strength       = 85
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1520 }
      name           = "第11零戰飛行聯隊 "
      type           = interceptor
      model          = 1
      strength       = 85
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 13016 id = 1550 }
    name     = "日本聯合艦隊第11航空戰隊  "
    location = 1184
    base     = 1184
    division = {
      id             = { type = 13016 id = 1551 }
      name           = "横須賀海軍航空隊 "
      type           = naval_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1552 }
      name           = "大湊海軍航空隊 "
      type           = naval_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1553 }
      name           = "鹿屋海軍航空隊 "
      type           = naval_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1554 }
      name           = "木更津海軍航空隊 "
      type           = naval_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      experience     = 20
    }
  }

  province_development = {
    id             = { type = 13016 id = 10000 }
    location       = 1184
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 13016 id = 10001 }
    location       = 1188
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 13016 id = 10002 }
    location       = 1187
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 13016 id = 10003 }
    location       = 1190
    cost           = 2.5000
    date           = { year = 1939 month = march day = 29 }
    manpower       = 6.0000
    size           = 6
    type           = infrastructure
  }
  province_development = {
    id             = { type = 13016 id = 10004 }
    location       = 3660
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 13016 id = 10005 }
    location       = 1393
    cost           = 2.5000
    date           = { year = 1939 month = march day = 29 }
    manpower       = 6.0000
    size           = 6
    type           = infrastructure
  }
  province_development = {
    id             = { type = 13016 id = 10006 }
    location       = 1191
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 13016 id = 10007 }
    location       = 3666
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 3.0000
    size           = 3
    type           = infrastructure
  }

  landdivision = { dormant = yes id = { type = 13016 id = 2419 } name = "北平城防司令部  "  type = garrison model = 1 experience = 40 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2425 } name = "太原城防司令部  "  type = garrison model = 1 experience = 40 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2424 } name = "上海城防司令部  "  type = garrison model = 1 experience = 40 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2421 } name = "南京要塞司令部  "  type = garrison model = 1 experience = 40 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2423 } name = "濟南城防司令部  "  type = garrison model = 1 experience = 40 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2426 } name = "廣州城防司令部  "  type = garrison model = 1 experience = 40 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4000 } name = "曼徳勒守備隊 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4001 } name = "仰光守備隊 "  type = militia model = 2 strength = 100 experience = 60 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4003 } name = "香港守備隊 "  type = militia model = 2 strength = 100 experience = 40 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4004 } name = "海南基地守備師団 "  type = garrison model = 1 strength = 100 experience = 40 extra = engineer brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4005 } name = "河内守衛隊 "  type = militia model = 2 strength = 100 experience = 60 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4006 } name = "金辺守衛隊 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4007 } name = "西貢守衛隊 "  type = militia model = 2 strength = 100 experience = 60 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4009 } name = "曼穀守衛隊 "  type = militia model = 2 strength = 100 experience = 60 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4011 } name = "新加坡守衛隊 "  type = militia model = 2 strength = 100 experience = 60 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4013 } name = "雅加達守衛師団 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4016 } name = "古晉守衛師団 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4018 } name = "望加錫守衛師団 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4024 } name = "卡加延守衛師団 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4020 } name = "莫爾兹比港守衛師団 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4022 } name = "馬尼拉守衛師団 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4026 } name = "拉包爾守衛師団 "  type = militia model = 2 strength = 100 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4030 } name = "鴨綠江防綫要塞群 "  type = garrison model = 2 strength = 100 experience = 40 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4032 } name = "鴨綠江防綫要塞群 "  type = garrison model = 2 strength = 100 experience = 40 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2409 } name = "鴨綠江防綫要塞群 "  type = garrison model = 2 experience = 40 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2410 } name = "鴨綠江防綫要塞群 "  type = garrison model = 2 experience = 40 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2411 } name = "鴨綠江防綫要塞群 "  type = garrison model = 2 experience = 40 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4034 } name = "山海関守備師団 "  type = bergsjaeger model = 3 strength = 100 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4035 } name = "承徳守備師団 "  type = bergsjaeger model = 3 strength = 100 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4038 } name = "林西守備師団 "  type = bergsjaeger model = 3 strength = 100 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4039 } name = "都山守備師団 "  type = bergsjaeger model = 3 strength = 100 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4040 } name = "隆化守備師団 "  type = bergsjaeger model = 3 strength = 100 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4041 } name = "平津要塞群 "  type = garrison model = 2 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 534 } name = "旅順口要塞重砲聯隊 "  type = garrison model = 3 experience = 60 extra = artillery brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 562 } name = "永興灣要塞守備隊"  type = garrison model = 3 experience = 60 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 564 } name = "鎮海灣要塞守備隊"  type = garrison model = 3 experience = 60 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 737 } name = "近衛師団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 738 } name = "近衛師団第1精銳旅団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 739 } name = "近衛師団第2精銳旅団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 740 } name = "第1“東京”甲種師団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 741 } name = "第2“仙台”甲種師団  "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 742 } name = "第3“名古屋”甲種師団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 743 } name = "第4“大阪”甲種師団 "  type = motorized model = 58 strength = 100 experience = 20 extra = artillery brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 13016 id = 744 } name = "第5“廣島”甲種師団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 745 } name = "第6“熊本”甲種師団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 746 } name = "第7“旭川”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 747 } name = "第8“弘前”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 748 } name = "第9“金澤”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 749 } name = "第10“姬路”甲種師団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 750 } name = "第11“善通寺”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 751 } name = "第12“小倉”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 752 } name = "第13“仙台”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 753 } name = "第14“宇都宮”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 754 } name = "第16“京都”甲種師団  "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 755 } name = "第18“久留米”甲種師団 "  type = mechanized model = 38 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 756 } name = "第19“羅南”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 757 } name = "第20“龍山”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 758 } name = "第15“敦賀”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 759 } name = "第17“姬路”甲種師団 "  type = motorized model = 58 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 6 } 
  landdivision = { dormant = yes id = { type = 13016 id = 724 } name = "仙台师团第25步兵旅団 "  type = motorized model = 57 strength = 100 experience = 40 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 725 } name = "仙台师团第26步兵旅団 "  type = motorized model = 57 strength = 100 experience = 40 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 726 } name = "久留米師団第35步兵旅団 "  type = mechanized model = 38 strength = 100 experience = 40 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 727 } name = "久留米師団第36步兵旅団 "  type = mechanized model = 38 strength = 100 experience = 40 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 728 } name = "敦賀師団第29步兵旅団 "  type = motorized model = 57 strength = 100 experience = 20 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 815 } name = "敦賀師団第30步兵旅団 "  type = motorized model = 57 strength = 100 experience = 20 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 729 } name = "姬路師団第33步兵旅団 "  type = motorized model = 57 strength = 100 experience = 20 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 816 } name = "姬路師団第34步兵旅団 "  type = motorized model = 57 strength = 100 experience = 20 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 765 } name = "関東軍★神奈川師団第41步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 766 } name = "関東軍★神奈川師団第42步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 767 } name = "関東軍★札幌師団第43步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2418 } name = "関東軍★札幌師団第44步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 768 } name = "関東軍★神戸師団第45步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 769 } name = "関東軍★神戸師団第46步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 770 } name = "関東軍★長野山地師団第1聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 13016 id = 771 } name = "関東軍★長野山地師団第2聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 13016 id = 772 } name = "関東軍★琦玉師団第47步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 773 } name = "関東軍★琦玉師団第48步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 774 } name = "関東軍★長野山地師団第3聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 775 } name = "関東軍★千葉師団第49步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 776 } name = "関東軍★千葉師団第50步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 777 } name = "関東軍★愛知師団第51步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 778 } name = "関東軍★愛知師団第52步兵旅団 "  type = motorized model = 57 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 779 } name = "関東軍★鳥取山地師団第1聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 780 } name = "関東軍★鳥取山地師団第2聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 781 } name = "関東軍★鳥取山地師団第3聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 782 } name = "関東軍★奈良山地師団第1聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 783 } name = "関東軍★奈良山地師団第2聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 784 } name = "関東軍★奈良山地師団第3聯隊 "  type = bergsjaeger model = 1 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 785 } name = "関東軍★戰車第1旅団 "  type = armor model = 1 strength = 100 experience = 20 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 786 } name = "関東軍★戰車第2旅団 "  type = armor model = 1 strength = 100 experience = 20 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 787 } name = "関東軍★戰車第3旅団 "  type = armor model = 1 strength = 100 experience = 20 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 788 } name = "関東軍★騎兵第18旅団 "  type = cavalry model = 83 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 789 } name = "関東軍★騎兵第19旅団 "  type = cavalry model = 83 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2413 } name = "関東軍★騎兵第20旅団 "  type = cavalry model = 83 strength = 100 experience = 60 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2414 } name = "関東軍★独立混成旅団 "  type = mechanized model = 38 strength = 100 experience = 100 extra = light_armor_brigade brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2415 } name = "関東軍★独立敢死隊旅団 "  type = mechanized model = 38 strength = 100 experience = 100 extra = light_armor_brigade brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2416 } name = "関東軍★錫林郭勒衛戍師団 "  type = motorized model = 57 experience = 80 extra = light_armor_brigade brigade_model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2452 } name = "前進基地守備要塞 "  type = garrison model = 1 strength = 100 experience = 25 extra = engineer brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 700 } name = "名古屋守備師団 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 701 } name = "大阪守備師団 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 702 } name = "広島守備師団 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 999 } name = "長崎守衛師団 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 995 } name = "横濱守衛師団 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 994 } name = "新瀉守衛師団 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 986 } name = "京都守衛師団 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 794 } name = "関東軍司令部 "  type = hq model = 1 strength = 100 experience = 80 extra = b_09 brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2417 } name = "新加坡衛戍師団 "  type = garrison model = 1 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 790 } name = "日本海軍陆戰隊司令部 "  type = garrison model = 1 experience = 40 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 807 } name = "大日本海軍陆戰師団 "  type = marine model = 0 strength = 100 experience = 20 extra = engineer } 
  landdivision = { dormant = yes id = { type = 13016 id = 808 } name = "大日本海軍憲兵師団 "  type = militia model = 2 strength = 100 experience = 20 extra = police } 
  landdivision = { dormant = yes id = { type = 13016 id = 791 } name = "支那戰区上海派遣軍指揮部 "  type = hq model = 1 experience = 60 extra = b_09 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 13016 id = 730 } name = "帝國海軍上海特別陸戰隊 "  type = marine model = 0 experience = 60 extra = engineer brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 13016 id = 731 } name = "帝國海軍上海特別機動隊 "  type = cavalry model = 82 experience = 60 extra = armored_car brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 13016 id = 732 } name = "大日本海軍特別行動旅団  "  type = marine model = 0 experience = 60 extra = engineer brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 13016 id = 793 } name = "支那戰区第十軍指揮部 "  type = hq model = 1 experience = 60 extra = b_09 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 13016 id = 733 } name = "大日本海軍陸上作戰師団  "  type = motorized model = 56 strength = 100 experience = 60 extra = artillery brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 13016 id = 2422 } name = "呼和浩特城防司令部  "  type = garrison model = 1 experience = 20 extra = police brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 800 } name = "廈門守備師団 "  type = infantry model = 57 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 801 } name = "寧波守備師団 "  type = infantry model = 57 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 802 } name = "青島守備師団 "  type = infantry model = 57 strength = 100 experience = 60 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 803 } name = "大同守備師団 "  type = bergsjaeger model = 2 strength = 100 experience = 100 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 814 } name = "夏威夷衛戍要塞  "  type = garrison model = 3 experience = 60 extra = b_09 brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4050 } name = "騎兵第1旅団"  type = cavalry model = 81 extra = police locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4051 } name = "騎兵第4旅団"  type = cavalry model = 81 extra = police locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4053 } name = "独立混成第2旅団"  type = bergsjaeger model = 1 experience = 10 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4054 } name = "自動車第23聯隊"  type = cavalry model = 82 strength = 30 extra = police brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4055 } name = "独立野砲兵第11聯隊"  type = cavalry model = 73 strength = 30 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4056 } name = "野戦重砲兵第1旅団"  type = cavalry model = 74 strength = 100 extra = artillery brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4057 } name = "第108師団"  type = infantry model = 57 strength = 100 extra = artillery brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4052 } name = "第109師団"  type = infantry model = 57 strength = 100 extra = police brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4058 } name = "支那駐屯混成旅団"  type = bergsjaeger model = 0 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4059 } name = "支那駐屯混成旅団"  type = bergsjaeger model = 0 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4060 } name = "支那駐屯混成旅団"  type = bergsjaeger model = 0 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4061 } name = "支那駐屯混成旅団"  type = bergsjaeger model = 0 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4062 } name = "第11独立警備隊"  type = militia model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4063 } name = "第12独立警備隊"  type = militia model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4064 } name = "第10独立警備隊"  type = militia model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4065 } name = "第13独立警備隊"  type = militia model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4066 } name = "第14独立警備隊"  type = militia model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4067 } name = "独立歩兵第11聯隊"  type = infantry model = 56 strength = 50 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4068 } name = "独立歩兵第12聯隊"  type = infantry model = 56 strength = 50 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4069 } name = "独立歩兵第13聯隊"  type = infantry model = 56 strength = 50 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 4070 } name = "第26兵団司令部"  type = hq model = 0 strength = 50 locked = yes } 

  navaldivision = { dormant = yes id = { type = 13016 id = 1250 } name = "飛鷹號 " type = escort_carrier model = 2 extra1 = b_01 brigade_model1 = 1 experience = 15 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1251 } name = "隼鷹號 " type = escort_carrier model = 2 extra1 = b_01 brigade_model1 = 1 experience = 15 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1252 } name = "祥鳳號 " type = escort_carrier model = 2 extra1 = b_01 brigade_model1 = 1 experience = 15 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1253 } name = "瑞鳳號 " type = escort_carrier model = 2 extra1 = b_01 brigade_model1 = 1 experience = 15 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1254 } name = "千歳號 " type = escort_carrier model = 2 extra1 = b_01 brigade_model1 = 1 experience = 15 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1255 } name = "千代田號 " type = escort_carrier model = 2 extra1 = b_01 brigade_model1 = 1 experience = 15 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20001 } name = "長門號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20002 } name = "陸奧號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20003 } name = "駿河號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20004 } name = "近江號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20027 } name = "加賀號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20028 } name = "土佐號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20029 } name = "紀伊號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20030 } name = "尾張號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20031 } name = "天城號 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20032 } name = "赤城號 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20033 } name = "高雄號 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20034 } name = "愛宕號 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20035 } name = "美濃號 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20036 } name = "備中號 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20037 } name = "遠江號 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20038 } name = "出羽號 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20005 } name = "長門號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20006 } name = "陸奧號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20007 } name = "近江號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20008 } name = "駿河號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20009 } name = "加賀號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20010 } name = "土佐號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20011 } name = "紀伊號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20012 } name = "尾張號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20015 } name = "翔鶴號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20016 } name = "瑞鶴號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20017 } name = "大鳳號 " type = carrier model = 6 extra1 = cag brigade_model1 = 2 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20018 } name = "翔鶴號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 50 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20019 } name = "瑞鶴號 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 50 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20020 } name = "大和號 " type = battleship model = 6 extra1 = naval_fire_controll_l extra2 = b_03 extra3 = naval_anti_air_l extra4 = b_04 extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 60 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20021 } name = "武藏號 " type = battleship model = 6 extra1 = naval_fire_controll_l extra2 = b_03 extra3 = naval_anti_air_l extra4 = b_04 extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20022 } name = "信濃號 " type = battleship model = 6 extra1 = naval_fire_controll_l extra2 = b_03 extra3 = naval_anti_air_l extra4 = b_04 extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1256 } name = "信濃號 " type = carrier model = 7 extra1 = cag brigade_model1 = 3 strength = 75 experience = 15 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20023 } name = "紀伊號 " type = battleship model = 8 extra1 = naval_fire_controll_l extra2 = b_03 extra3 = naval_anti_air_l extra4 = b_04 extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20024 } name = "尾張號 " type = battleship model = 8 extra1 = naval_fire_controll_l extra2 = b_03 extra3 = naval_anti_air_l extra4 = b_04 extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20025 } name = "大和號 " type = battleship model = 7 extra1 = naval_fire_controll_l extra2 = b_03 extra3 = naval_anti_air_l extra4 = b_04 extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 20026 } name = "武藏號 " type = battleship model = 7 extra1 = naval_fire_controll_l extra2 = b_03 extra3 = naval_anti_air_l extra4 = b_04 extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1300 } name = "苍龍號 " type = carrier model = 1 extra1 = cag brigade_model1 = 1 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1302 } name = "飞龍號 " type = carrier model = 1 extra1 = cag brigade_model1 = 1 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1322 } name = "熊野號 " type = heavy_cruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1327 } name = "鈴谷號 " type = heavy_cruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1324 } name = "利根號 " type = heavy_cruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 13016 id = 1328 } name = "筑摩號 " type = heavy_cruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 13016 id = 804 } name = "扶桑號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 805 } name = "山城號 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l extra4 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 806 } name = "扶桑號 " type = carrier model = 6 extra1 = cag brigade_model1 = 2 strength = 100 experience = 10 }
  navaldivision = { dormant = yes id = { type = 13016 id = 809 } name = "山城號 " type = carrier model = 6 extra1 = cag brigade_model1 = 2 strength = 100 experience = 10 }
  navaldivision = { dormant = yes id = { type = 13016 id = 810 } name = "伊勢號 " type = carrier model = 6 extra1 = cag extra2 = naval_fire_controll_l extra3 = naval_fire_controll_l brigade_model1 = 2 brigade_model2 = 1 brigade_model3 = 1 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 811 } name = "日向號 " type = carrier model = 6 extra1 = cag extra2 = naval_fire_controll_l extra3 = naval_fire_controll_l brigade_model1 = 2 brigade_model2 = 1 brigade_model3 = 1 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 13016 id = 812 } name = "北上號 " type = light_cruiser model = 2 extra1 = naval_torpedoes_s extra2 = naval_anti_air_s extra3 = naval_asw brigade_model1 = 4 brigade_model2 = 2 brigade_model3 = 2 strength = 100 experience = 40 }
  navaldivision = { dormant = yes id = { type = 13016 id = 813 } name = "大井號 " type = light_cruiser model = 2 extra1 = naval_torpedoes_s extra2 = naval_anti_air_s extra3 = naval_asw brigade_model1 = 4 brigade_model2 = 2 brigade_model3 = 2 strength = 100 experience = 40 }
}
