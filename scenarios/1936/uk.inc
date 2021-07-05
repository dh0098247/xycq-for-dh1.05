##############################
# Country definition for ENG #
##############################
province = {
  id = 5 # 奥克尼群岛
}
province = {
  id = 9 # 格拉斯哥
}
province = {
  id = 10 # 爱丁堡
}
province = {
  id = 14 # 利物浦
}
province = {
  id = 16 # 伯明翰
}
province = {
  id = 17 # 诺里奇
}
province = {
  id = 19 # 伦敦
}
province = {
  id = 20 # 多佛尔（英国）
}
province = {
  id = 21 # 朴茨茅斯
}
province = {
  id = 22 # 布里斯托尔
}
province = {
  id = 23 # 普利茅斯
}
province = {
  id = 28 # 贝尔法斯特
  supplypool = 500
  oilpool = 500
}
province = {
  id = 31 # 马耳他岛
  landfort = 5
  coastalfort = 5
  supplypool = 500
  oilpool = 500
}
province = {
  id = 348 # 直布罗陀
  landfort = 10
  supplypool = 1000
  oilpool = 1000
}
province = {
  id = 404 # 海法
}
province = {
  id = 444 # 尼科西亚
}
province = {
  id = 538 # 百慕大群岛
  supplypool = 500
  oilpool = 100
}
province = {
  id = 576 # 纽芬兰岛
}
province = {
  id = 866 # 福克兰群岛
  supplypool = 500
  oilpool = 100
}
province = {
  id = 873 # 乔治敦（圭亚那）
}
province = {
  id = 900 # 苏伊士运河区（东岸）
  landfort = 10
}
province = {
  id = 901 # 塞得港
  supplypool = 200
  oilpool = 200
}
province = {
  id = 906 # 亚历山大港
}
province = {
  id = 988 # 弗里敦
  supplypool = 200
  oilpool = 200
}
province = {
  id = 1002 # 阿克拉
}
province = {
  id = 1008 # 拉各斯
}
province = {
  id = 1030 # 苏丹港
}
province = {
  id = 1061 # 蒙巴萨
}
province = {
  id = 1066 # 喀土穆
}
province = {
  id = 1237 # 上海市
}
province = {
  id = 1296 # 曼德勒
}
province = {
  id = 1299 # 仰光
}
province = {
  id = 1315 # 香港
  supplypool = 1000
  oilpool = 1000
}
province = {
  id = 1352 # 吉隆坡
}
province = {
  id = 1353 # 新加坡
  supplypool = 500
  oilpool = 500
}
province = {
  id = 1457 # 加尔各答
}
province = {
  id = 1466 # 艾哈迈达巴德
}
province = {
  id = 1469 # 德里
}
province = {
  id = 1494 # 卡拉奇（巴基斯坦）
}
province = {
  id = 1504 # 阿布扎比—迪拜
}
province = {
  id = 1505 # 孟买
}
province = {
  id = 1508 # 维杰亚瓦达
}
province = {
  id = 1509 # 马德拉斯（金奈）
}
province = {
  id = 1515 # 马杜赖
}
province = {
  id = 1517 # 科伦坡
  coastalfort = 2
  supplypool = 200
  oilpool = 200
}
province = {
  id = 1644 # 古晋
}
province = {
  id = 1685 # 瓜达尔卡纳尔岛
  supplypool = 500
}
province = { id = 1762 supplypool = 100 } # 菲尼克斯群岛
province = {
  id = 1799 # 加沙
}
province = {
  id = 1813 # 亚丁
}
province = {
  id = 1817 # 迪戈加西亚岛
  supplypool = 500
  oilpool = 500
}
province = {
  id = 1820 # 多哈
}
province = {
  id = 1822 # 科威特
}
province = {
  id = 3007 # 诺丁汉
}
province = {
  id = 3741 # 斯里巴加湾
}

#####################
# Country main data #
#####################

country = {
  tag                = ENG
  capital            = 19 # 伦敦
  manpower           = 1200
  tc_mod                 = 1
  research_mod           = 1.1
  peacetime_ic_mod       = 0.25
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 400
  transports     = 2500
  escorts        = 800

  diplomacy = {
    relation = {
      tag        = AFG
      value      = -75
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 200 }
    relation = {
      tag        = AUS
      value      = 75
      guaranteed = { year = 1934 month = september day = 27 }
    }
    relation = {
      tag        = TIB
      value      = 75
      guaranteed = { year = 1935 month = january day = 27 }
    }
    relation = {
      tag        = BEL
      value      = 150
      guaranteed = { year = 1935 month = february day = 11 }
    }
    relation = { tag = BHU value = 200 access = yes }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 200 }
    relation = { tag = CUB value = 30 }
    relation = { tag = CZE value = 125 }
    relation = {
      tag        = DEN
      value      = 100
      guaranteed = { year = 1934 month = august day = 30 }
    }
    relation = { tag = ENG value = 50 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 50 }
    relation = { tag = FIN value = 85 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = {
      tag        = GRE
      value      = 50
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = GUA value = 50 }
    relation = {
      tag        = HOL
      value      = 125
      guaranteed = { year = 1935 month = february day = 11 }
    }
    relation = { tag = HON value = 50 }
    relation = { tag = HUN value = -50 }
    relation = {
      tag        = IRE
      value      = 25
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = {
      tag        = IRQ
      value      = 100
      access     = yes
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation = { tag = MEX value = 50 }
    relation = { tag = NEP value = 200 access = yes }
    relation = {
      tag        = NOR
      value      = 90
      guaranteed = { year = 1934 month = august day = 30 }
    }
    relation = { tag = NZL value = 200 }
    relation = {
      tag        = OMN
      value      = 150
      access     = yes
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = {
      tag        = PER
      value      = 25
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = POL value = 50 }
    relation = {
      tag        = POR
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 200 }
    relation = {
      tag        = SAU
      value      = 100
      guaranteed = { year = 1935 month = february day = 11 }
    }
    relation = {
      tag        = SCH
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SIA value = 70 }
    relation = { tag = SPR value = -10 }
    relation = { tag = SOV value = -25 }
    relation = {
      tag        = SWE
      value      = 80
      guaranteed = { year = 1934 month = august day = 30 }
    }
    relation = {
      tag        = TUR
      value      = 75
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = USA value = 150 }
    relation = { tag = VEN value = -10 }
    relation = {
      tag        = YEM
      value      = 150
      access     = yes
      guaranteed = { year = 1934 month = february day = 11 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }

  nationalprovinces      = { 10 11 12 1284 1285 1286 1287 1288 1289 1290 1291 1292 1295 1296 1297 1298 1299 13 1300 1301 1302 1304 1346 14 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 15 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 16 17 1877 1878 19 20 21 22 23 28 29 3 3002 3003 3004 3005 3006 3007 3008 3009 3010 3011 3012 3013 3014 3015 3016 3019 31 348 3579 3580 3585 3691 3692 3693 3694 3695 3696 3697 3698 3699 3700 3701 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808 3809 3810 3811 3812 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3863 3950 4092 4093 4094 444 5 6 7 8 9 3939 }
  ownedprovinces         = { 10 1000 1001 1002 1007 1008 1009 1010 1011 1012 1019 1020 1021 1022 1023 1024 1025 1026 1027 1028 1029 1030 1031 1032 1035 1036 1040 1041 1059 1060 1061 1062 1064 1065 1066 1067 1068 1069 1085 1099 11 1104 1105 1111 1112 1124 1125 1126 1128 1129 1132 1136 1139 1140 1141 1145 1147 1148 12 1284 1285 1286 1287 1288 1289 1290 1291 1292 1295 1296 1297 1298 1299 13 1300 1301 1302 1304 1315 1346 1349 1350 1351 1352 1353 14 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 15 1504 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 16 1614 1622 1644 1646 1647 1681 1683 1684 1685 1686 1687 1688 17 1752 1753 1754 1757 1758 1759 1760 1761 1762 1763 1767 1768 1769 1770 1796 1797 1798 1799 1800 1801 1802 1803 1813 1814 1815 1816 1817 1820 1822 1877 1878 19 20 21 22 23 2675 28 29 3 3002 3003 3004 3005 3006 3007 3008 3009 3010 3011 3012 3013 3014 3015 3016 3019 31 3286 3287 3288 3289 3290 3291 3292 3293 3294 3295 3327 3328 3329 3330 3331 3332 3334 3335 3336 3337 3338 3339 3340 3341 3342 3343 3344 3345 3346 3347 3348 3353 3354 3355 3356 3357 3358 3359 3360 3361 3362 3363 3365 3366 3368 3369 3385 3386 3387 3397 348 3579 3580 3581 3582 3585 3595 3597 3691 3692 3693 3694 3695 3696 3697 3698 3699 3700 3701 3736 3737 3738 3740 3741 3742 3743 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3804 3805 3806 3807 3808 3809 3810 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3906 3924 3925 3926 3927 3939 3956 3957 3965 3970 4 4036 404 406 407 4092 4093 4094 444 5 538 575 576 6 652 653 7 758 8 808 809 866 871 873 891 896 897 9 900 901 902 903 904 905 906 907 908 909 910 911 912 913 914 915 982 988 999 3863 1237 }
  controlledprovinces    = { 10 1000 1001 1002 1007 1008 1009 1010 1011 1012 1019 1020 1021 1022 1023 1024 1025 1026 1027 1028 1029 1030 1031 1032 1035 1036 1040 1041 1059 1060 1061 1062 1064 1065 1066 1067 1068 1069 1085 1099 11 1104 1105 1111 1112 1124 1125 1126 1128 1129 1132 1136 1139 1140 1141 1145 1147 1148 12 1284 1285 1286 1287 1288 1289 1290 1291 1292 1295 1296 1297 1298 1299 13 1300 1301 1302 1304 1315 1346 1349 1350 1351 1352 1353 14 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 15 1504 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 16 1614 1622 1644 1646 1647 1681 1683 1684 1685 1686 1687 1688 17 1752 1753 1754 1757 1758 1759 1760 1761 1762 1763 1767 1768 1769 1770 1796 1797 1798 1799 1800 1801 1802 1803 1813 1814 1815 1816 1817 1820 1822 1877 1878 19 20 21 22 23 2675 28 29 3 3002 3003 3004 3005 3006 3007 3008 3009 3010 3011 3012 3013 3014 3015 3016 3019 31 3286 3287 3288 3289 3290 3291 3292 3293 3294 3295 3327 3328 3329 3330 3331 3332 3334 3335 3336 3337 3338 3339 3340 3341 3342 3343 3344 3345 3346 3347 3348 3353 3354 3355 3356 3357 3358 3359 3360 3361 3362 3363 3365 3366 3368 3369 3385 3386 3387 3397 348 3579 3580 3581 3582 3585 3595 3597 3691 3692 3693 3694 3695 3696 3697 3698 3699 3700 3701 3736 3737 3738 3740 3741 3742 3743 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3804 3805 3806 3807 3808 3809 3810 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3906 3924 3925 3926 3927 3939 3956 3957 3965 3970 4 4036 404 406 407 4092 4093 4094 444 5 538 575 576 6 652 653 7 758 8 808 809 866 871 873 891 896 897 9 900 901 902 903 904 905 906 907 908 909 910 911 912 913 914 915 982 988 999 3863 1237 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5090 5060 5200 5810 5120 5820 5180 5660 5670 5680 5310 5010 5470 1010 1020 1100 1110 1710 1830 1840 1850 2280 2290 2610 2300 2620 2360 2420 2430 2540 2550 2560 2010 2020 2030 3490 3550 3560 3600 3610 3620 3010 3020 3070 3080 3130 3140 3250 3260 3320 3330 3650 3660 3820 3410 3760 4010 4020 4120 6050 6010 6020 6030 6040 6100 6320 6390 6480 6400 6460 6500 8010 8020 8390 8150 8030 8050 8200 8160 8530 8600 8170 9700 9710 9010 9020 7410 3420 3830 5020 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 3
    free_market       = 8
    professional_army = 10
    defense_lobby     = 3
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 1001 } # 乔治五世 
  headofgovernment       = { type = 9 id = 1002 } # 斯坦利 鲍尔温 
  foreignminister        = { type = 9 id = 1003 } # 罗伯特.安东尼.艾登
  armamentminister       = { type = 9 id = 1004 } # 内维尔 张伯伦 
  ministerofsecurity     = { type = 9 id = 1005 } # 约翰 西蒙 爵士 
  ministerofintelligence = { type = 9 id = 1006 } # 休 辛克莱尔 爵士 
  chiefofstaff           = { type = 9 id = 1007 } # A. 蒙哥马利-马辛本特爵士 
  chiefofarmy            = { type = 9 id = 1008 } # A. 蒙哥马利-马辛本特爵士 
  chiefofnavy            = { type = 9 id = 1009 } # 厄恩利 查特菲尔德 爵士 
  chiefofair             = { type = 9 id = 1010 } # 欧文 博伊德 爵士 

  landunit = {
    id       = { type = 12700 id = 1 }
    name     = "不列颠本土防卫军 "
    location = 22
    division = {
      id             = { type = 12700 id = 1706 }
      name           = "不列颠战区指挥部 "
      type           = hq
      model          = 0
      extra          = b_09
      brigade_model  = 1
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2 }
      name           = "陆军第1步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 3 }
      name           = "陆军第2步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 12700 id = 4 }
    name     = "英国陆军第II军 "
    location = 10
    division = {
      id             = { type = 12700 id = 5 }
      name           = "陆军第5步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 12700 id = 6 }
    name     = "英国陆军第III军 "
    location = 21
    division = {
      id             = { type = 12700 id = 7 }
      name           = "陆军第3步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 12700 id = 8 }
    name     = "香港防卫司令部 "
    location = 1315
    division = {
      id             = { type = 12700 id = 9 }
      name           = "皇家香港军团 "
      type           = militia
      extra          = artillery
      strength       = 100
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 10 }
    name     = "远东防卫司令部 "
    location = 1353
    division = {
      id             = { type = 12700 id = 11 }
      name           = "新加坡卫戍要塞群 "
      type           = garrison
      model          = 3
      extra          = artillery
      brigade_model  = 3
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 12 }
    name     = "直布罗陀总督府 "
    location = 348
    division = {
      id             = { type = 12700 id = 13 }
      name           = "皇家直布罗陀军团 "
      type           = militia
      strength       = 100
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 14 }
    name     = "锡兰总督府 "
    location = 1517
    division = {
      id             = { type = 12700 id = 15 }
      name           = "皇家锡兰防卫队 "
      type           = militia
      strength       = 100
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 16 }
    name     = "马耳他总督府 "
    location = 31
    division = {
      id             = { type = 12700 id = 17 }
      name           = "皇家马耳他军团 "
      type           = militia
      strength       = 100
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 18 }
    name     = "中东防卫司令部 "
    location = 1797
    division = {
      id             = { type = 12700 id = 19 }
      name           = "陆军第7步兵师 "
      type           = motorized
      model          = 27
      extra          = anti_tank
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 20 }
      name           = "陆军第8步兵师 "
      type           = motorized
      model          = 27
      extra          = anti_air
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 12700 id = 21 }
    name     = "印度军团陆军第I军 "
    location = 1469
    division = {
      id             = { type = 12700 id = 22 }
      name           = "陆军第1印度步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 23 }
    name     = "印度军团陆军第II军 "
    location = 1285
    division = {
      id             = { type = 12700 id = 24 }
      name           = "陆军第2印度步兵师 "
      type           = infantry
      model          = 28
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 25 }
    name     = "印度军团陆军第III军 "
    location = 1299
    division = {
      id             = { type = 12700 id = 26 }
      name           = "陆军第3印度步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 27 }
    name     = "印度军团陆军第IV军 "
    location = 1494
    division = {
      id             = { type = 12700 id = 28 }
      name           = "陆军第4印度步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 29 }
    name     = "印度军团陆军第V军 "
    location = 1478
    division = {
      id             = { type = 12700 id = 30 }
      name           = "陆军第5印度步兵师 "
      type           = infantry
      model          = 27
      extra          = artillery
      brigade_model  = 1
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 31 }
    name     = "印度军团陆军第VI军 "
    location = 1461
    division = {
      id             = { type = 12700 id = 32 }
      name           = "陆军第6印度步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 33 }
    name     = "印度军团陆军第VII军 "
    location = 1505
    division = {
      id             = { type = 12700 id = 34 }
      name           = "陆军第7印度步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 35 }
    name     = "印度军团陆军第VIII军 "
    location = 1513
    division = {
      id             = { type = 12700 id = 36 }
      name           = "陆军第8印度步兵师 "
      type           = infantry
      model          = 27
      extra          = anti_tank
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 37 }
    name     = "印度军团陆军第IX军 "
    location = 1509
    division = {
      id             = { type = 12700 id = 38 }
      name           = "陆军第9印度步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 39 }
    name     = "印度军团陆军第X军 "
    location = 1514
    division = {
      id             = { type = 12700 id = 40 }
      name           = "陆军第10印度步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 41 }
    name     = "印度军团陆军第XI军 "
    location = 1515
    division = {
      id             = { type = 12700 id = 42 }
      name           = "陆军第11印度步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 43 }
    name     = "苏伊士卫戍军 "
    location = 900
    division = {
      id             = { type = 12700 id = 44 }
      name           = "苏伊士治安师 "
      type           = infantry
      model          = 27
      extra          = engineer
      brigade_model  = 2
      strength       = 100
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 45 }
    name     = "苏丹殖民军团 "
    location = 1065
    division = {
      id             = { type = 12700 id = 46 }
      name           = "陆军第1苏丹殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 47 }
    name     = "苏丹殖民防卫军团 "
    location = 1066
    division = {
      id             = { type = 12700 id = 48 }
      name           = "陆军第2苏丹殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 49 }
    name     = "苏丹殖民集群 "
    location = 1041
    division = {
      id             = { type = 12700 id = 50 }
      name           = "陆军第3苏丹殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 51 }
    name     = "乌干达殖民集群 "
    location = 1064
    division = {
      id             = { type = 12700 id = 52 }
      name           = "陆军第1乌干达殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 53 }
    name     = "乌干达殖民军团 "
    location = 1060
    division = {
      id             = { type = 12700 id = 54 }
      name           = "陆军第2乌干达殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 55 }
    name     = "肯尼亚殖民集群 "
    location = 1064
    division = {
      id             = { type = 12700 id = 56 }
      name           = "陆军第1肯尼亚殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 57 }
    name     = "肯尼亚殖民军团 "
    location = 1059
    division = {
      id             = { type = 12700 id = 58 }
      name           = "陆军第2肯尼亚殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 59 }
    name     = "坦桑尼亚殖民集群 "
    location = 1061
    division = {
      id             = { type = 12700 id = 60 }
      name           = "陆军第1坦桑尼亚殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 61 }
    name     = "坦桑尼亚殖民军团 "
    location = 1141
    division = {
      id             = { type = 12700 id = 62 }
      name           = "陆军第2坦桑尼亚殖民地师 "
      type           = militia
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 258 }
    name     = "远东联合防卫军 "
    location = 1237
    division = {
      id             = { type = 12700 id = 259 }
      name           = "远东联合防卫军特殊镇压部队 "
      type           = mechanized
      model          = 14
      extra          = engineer
      brigade_model  = 3
      strength       = 100
      experience     = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 260 }
    name     = "迪戈加西亚守备部队 "
    location = 1817
    division = {
      id             = { type = 12700 id = 262 }
      name           = "迪戈加西亚卫戍师 "
      type           = motorized
      model          = 28
      extra          = engineer
      brigade_model  = 2
      strength       = 100
      experience     = 40
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 12700 id = 84 }
    name     = "英国皇家海军本土舰队 "
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 85 }
      name           = "纳尔逊号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 86 }
      name           = "罗德尼号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 87 }
      name           = "皇家君主号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 88 }
      name           = "皇家橡树号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 89 }
      name           = "决心号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 90 }
      name           = "拉米伊号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 91 }
      name           = "胡德号 "
      type           = battlecruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
      experience     = 40
    }
    division = {
      id             = { type = 12700 id = 92 }
      name           = "声望号 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
      brigade_model4 = 1
    }
    division = {
      id             = { type = 12700 id = 252 }
      name           = "反击号 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
      brigade_model4 = 1
    }
    division = {
      id             = { type = 12700 id = 93 }
      name           = "暴怒号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 96 }
      name           = "开罗号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 97 }
      name           = "海神号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 98 }
      name           = "达尼丁号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 99 }
      name           = "海王星号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 100 }
      name           = "猎户座号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 101 }
      name           = "皇家海军第1驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 102 }
      name           = "皇家海军第2驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 103 }
      name           = "皇家海军第3驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 268 }
      name           = "皇家海军第4驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 104 }
    name     = "百眼巨人号 "
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 105 }
      name           = "百眼巨人号 "
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 106 }
    name     = "英国皇家海军第II潜艇战队 "
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 107 }
      name           = "皇家海军第3潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 12700 id = 108 }
      name           = "皇家海军第4潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 12700 id = 109 }
      name           = "皇家海军第5潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 12700 id = 110 }
      name           = "皇家海军第6潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 12700 id = 111 }
      name           = "皇家海军第7潜艇编队 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 112 }
    name     = "英国皇家海军第I运输舰队 "
    location = 1505
    base     = 1505
    division = {
      id             = { type = 12700 id = 113 }
      name           = "萨福克号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 12700 id = 114 }
      name           = "特洛伊星号 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12700 id = 117 }
    name     = "英国皇家海军第II运输舰队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 12700 id = 118 }
      name           = "帝国火绳枪号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 12700 id = 119 }
      name           = "霍罗拉塔号 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12700 id = 122 }
    name     = "英国皇家海军第III运输舰队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 12700 id = 123 }
      name           = "克兰麦考利号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 12700 id = 124 }
      name           = "帝国船长号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 12700 id = 125 }
      name           = "安陆军第斯号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 12700 id = 126 }
      name           = "快乐国王号 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12700 id = 127 }
    name     = "英国皇家海军第IV运输舰队 "
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 128 }
      name           = "新阿姆斯特丹号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 12700 id = 129 }
      name           = "马洛亚号 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12700 id = 132 }
    name     = "英国皇家海军第V运输舰队 "
    location = 23
    base     = 23
    division = {
      id             = { type = 12700 id = 133 }
      name           = "帝国荣耀号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 12700 id = 134 }
      name           = "山姆火炬号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 12700 id = 135 }
      name           = "埃德蒙顿堡号 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12700 id = 1370 }
    name     = "英国皇家海军第I驱逐舰战队 "
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 1371 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1372 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1373 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1374 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1375 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1376 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1377 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1378 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1379 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1380 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1381 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1382 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1383 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1384 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1385 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1386 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1387 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 1388 }
      name           = "皇家海军驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 137 }
    name     = "英国皇家海军第I驱逐舰战队 "
    location = 23
    base     = 23
    division = {
      id             = { type = 12700 id = 269 }
      name           = "皇家海军第5驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 138 }
      name           = "皇家海军第6驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 139 }
      name           = "皇家海军第7驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 140 }
    name     = "英国皇家海军第II驱逐舰战队 "
    location = 14
    base     = 14
    division = {
      id             = { type = 12700 id = 270 }
      name           = "皇家海军第8驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 141 }
      name           = "皇家海军第9驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 142 }
    name     = "英国皇家海军第III驱逐舰战队 "
    location = 14
    base     = 14
    division = {
      id             = { type = 12700 id = 271 }
      name           = "皇家海军第10驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 143 }
      name           = "皇家海军第11驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 144 }
    name     = "英国皇家海军第IV驱逐舰战队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 12700 id = 272 }
      name           = "皇家海军第12驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 145 }
      name           = "皇家海军第13驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 146 }
    name     = "英国皇家海军第V驱逐舰战队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 12700 id = 273 }
      name           = "皇家海军第14驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 147 }
      name           = "皇家海军第15驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 148 }
      name           = "皇家海军第16驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 149 }
    name     = "英国皇家海军地中海舰队 "
    location = 906
    base     = 906
    division = {
      id             = { type = 12700 id = 150 }
      name           = "伊丽莎白女王号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 10
    }
    division = {
      id             = { type = 12700 id = 151 }
      name           = "巴勒姆号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 152 }
      name           = "勇士号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 10
    }
    division = {
      id             = { type = 12700 id = 253 }
      name           = "马来亚号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 254 }
      name           = "厌战号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 10
    }
    division = {
      id             = { type = 12700 id = 153 }
      name           = "复仇号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12700 id = 154 }
      name           = "勇敢号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 12700 id = 157 }
      name           = "光荣号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 12700 id = 158 }
      name           = "德文郡号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 159 }
      name           = "伦敦号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 160 }
      name           = "什罗浦郡号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 161 }
      name           = "苏塞克斯号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 163 }
      name           = "埃克塞特号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 164 }
      name           = "约克号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 165 }
      name           = "科芬特里号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_torpedoes_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 166 }
      name           = "杓鹬号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 167 }
      name           = "德里号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 168 }
      name           = "派遣号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 169 }
      name           = "德尔班号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 170 }
      name           = "极光号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
      experience     = 10
    }
    division = {
      id             = { type = 12700 id = 171 }
      name           = "皇家海军第17驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 172 }
      name           = "皇家海军第18驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 173 }
      name           = "皇家海军第19驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 174 }
      name           = "皇家海军第20驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 175 }
      name           = "皇家海军第21驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 176 }
      name           = "皇家海军第22驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 177 }
    name     = "英国皇家海军第I潜艇战队 "
    location = 906
    base     = 906
    division = {
      id             = { type = 12700 id = 178 }
      name           = "皇家海军第1潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 12700 id = 179 }
      name           = "皇家海军第2潜艇编队 "
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 12700 id = 180 }
    name     = "英国皇家海军美洲西印舰队 "
    location = 538
    base     = 538
    division = {
      id             = { type = 12700 id = 181 }
      name           = "天龙座号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 182 }
      name           = "阿贾克斯号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 274 }
      name           = "皇家海军第23驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 183 }
      name           = "皇家海军第24驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 184 }
    name     = "英国皇家海军非洲舰队 "
    location = 988
    base     = 988
    division = {
      id             = { type = 12700 id = 261 }
      name           = "卢安达号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 185 }
      name           = "卡尔里斯号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 275 }
      name           = "皇家海军第25驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 186 }
      name           = "皇家海军第26驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 12700 id = 187 }
    name     = "英国皇家海军东印舰队 "
    location = 1517
    base     = 1517
    division = {
      id             = { type = 12700 id = 188 }
      name           = "诺福克号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 12700 id = 189 }
      name           = "迪奥梅德号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 190 }
      name           = "翡翠号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_torpedoes_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 191 }
      name           = "企业号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 276 }
      name           = "皇家海军第27驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 192 }
      name           = "皇家海军第28驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
  navalunit = {
    id       = { type = 12700 id = 193 }
    name     = "英国皇家海军中国舰队 "
    location = 1315
    base     = 1315
    division = {
      id             = { type = 12700 id = 201 }
      name           = "开普敦号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 202 }
      name           = "皇家海军第29驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 12700 id = 203 }
      name           = "皇家海军第30驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
  navalunit = {
    id       = { type = 12700 id = 204 }
    name     = "英国皇家海军第III潜艇战队 "
    location = 1315
    base     = 1315
    division = {
      id             = { type = 12700 id = 205 }
      name           = "皇家海军第8潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 12700 id = 206 }
      name           = "皇家海军第9潜艇编队 "
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 12700 id = 207 }
    name     = "英国皇家海军后备舰队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 12700 id = 208 }
      name           = "竞技神号 "
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 12700 id = 209 }
      name           = "埃芬加姆号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 210 }
      name           = "弗罗比舍号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 211 }
      name           = "多塞特郡号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division = {
      id             = { type = 12700 id = 155 }
      name           = "霍金斯号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 156 }
      name           = "贝里克郡号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 162 }
      name           = "康沃尔号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 195 }
      name           = "坎伯兰号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 196 }
      name           = "萨福克号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 197 }
      name           = "肯特郡号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12700 id = 212 }
      name           = "阿基里斯号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 213 }
      name           = "卡利登号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 214 }
      name           = "卡里普索号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 215 }
      name           = "卡拉多克号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 216 }
      name           = "加尔各答号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 217 }
      name           = "科伦坡号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 218 }
      name           = "加的夫号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 219 }
      name           = "席瑞斯号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 220 }
      name           = "库拉索号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 221 }
      name           = "黛安娜号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 222 }
      name           = "不屈号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 223 }
      name           = "皇家海军第31驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 12700 id = 224 }
      name           = "皇家海军第32驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
  }

  airunit = { 
    id       = { type = 12700 id = 63 }
    name     = "英国皇家空军第I联队 "
    location = 14
    base     = 14
    division = {
      id             = { type = 12700 id = 64 }
      name           = "第1皇家战术轰炸机大队 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
  }
  airunit = { 
    id       = { type = 12700 id = 65 }
    name     = "英国皇家空军战略轰炸机联队 "
    location = 17
    base     = 17
    division = {
      id             = { type = 12700 id = 66 }
      name           = "第2皇家战略轰炸机大队 "
      type           = strategic_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 12700 id = 68 }
      name           = "第3皇家战略轰炸机大队 "
      type           = strategic_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 12700 id = 70 }
      name           = "第4皇家战略轰炸机大队 "
      type           = strategic_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
  }
  airunit = { 
    id       = { type = 12700 id = 251 }
    name     = "英国皇家空军第II联队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 12700 id = 71 }
      name           = "第5皇家战术轰炸机大队 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
  }
  airunit = { 
    id       = { type = 12700 id = 72 }
    name     = "英国皇家空军第VII联队 "
    location = 14
    base     = 14
    division = {
      id             = { type = 12700 id = 73 }
      name           = "第11皇家战斗机大队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 74 }
    name     = "英国皇家空军第X联队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 12700 id = 75 }
      name           = "第12皇家战斗机大队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 76 }
    name     = "英国皇家空军第IX联队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 12700 id = 77 }
      name           = "第13皇家战斗机大队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 78 }
    name     = "中东空军指挥部 "
    location = 906
    base     = 906
    division = {
      id             = { type = 12700 id = 79 }
      name           = "中东空军大队 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
  }
  airunit = { 
    id       = { type = 12700 id = 80 }
    name     = "印度空军指挥部 "
    location = 1505
    base     = 1505
    division = {
      id             = { type = 12700 id = 81 }
      name           = "印度空军大队 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
  }
  airunit = { 
    id       = { type = 12700 id = 82 }
    name     = "远东空军指挥部 "
    location = 1353
    base     = 1353
    division = {
      id             = { type = 12700 id = 83 }
      name           = "远东空军大队 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
  }

  province_development = {
    id             = { type = 12700 id = 10000 }
    location       = 19
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10001 }
    location       = 16
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10002 }
    location       = 14
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10003 }
    location       = 9
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10004 }
    location       = 13
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10005 }
    location       = 12
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10006 }
    location       = 11
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10007 }
    location       = 10
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10008 }
    location       = 1517
    cost           = 2.5000
    date           = { year = 1939 month = march day = 29 }
    manpower       = 6.0000
    size           = 6
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10009 }
    location       = 1514
    cost           = 2.5000
    date           = { year = 1939 month = march day = 29 }
    manpower       = 6.0000
    size           = 6
    type           = infrastructure
  }
  province_development = {
    id             = { type = 12700 id = 10010 }
    location       = 1459
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }

  landdivision = { dormant = yes id = { type = 12700 id = 338 } name = "塞浦路斯防卫师 "  type = infantry model = 29 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 377 } name = "克利特防卫A师 "  type = infantry model = 29 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 378 } name = "克利特防卫B师 "  type = infantry model = 29 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 341 } name = "普利茅斯海岸要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 342 } name = "朴次茅斯海岸要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 343 } name = "多佛海岸要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 344 } name = "“布里斯托尔”禁卫步兵师  "  type = mechanized model = 12 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 345 } name = "诺维奇海岸要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 346 } name = "利物浦要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 347 } name = "“金斯顿赫尔”禁卫装甲师  "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 348 } name = "“布莱顿”禁卫装甲师  "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 349 } name = "“米德尔斯堡”禁卫装甲师 "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 350 } name = "爱丁堡要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 409 } name = "“瑟索”禁卫装甲师 "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 340 } name = "贝尔法斯特要塞群 "  type = garrison model = 3 experience = 80 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 359 } name = "“米德尔斯堡”禁卫装甲师 "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 401 } name = "白金汉宫要塞群 "  type = garrison model = 4 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 387 } name = "伦敦要塞群 "  type = garrison model = 4 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 413 } name = "“誓约胜利之剑”禁卫装甲师 "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 414 } name = "“远离尘世的理想乡”禁卫装甲师 "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 415 } name = "“阿瓦隆”禁卫装甲师 "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 416 } name = "“基尔巴特·斯坦因”禁卫装甲师 "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 393 } name = "“加迪夫”禁卫装甲师  "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 394 } name = "“切尔姆斯福特”禁卫装甲师  "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 395 } name = "“埃克塞特”禁卫装甲师  "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 399 } name = "“林肯”禁卫装甲师  "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 364 } name = "曼彻斯特要塞群 "  type = garrison model = 3 experience = 80 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 403 } name = "伯明翰要塞群 "  type = garrison model = 3 experience = 80 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 360 } name = "斯卡珀河基地要塞 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 411 } name = "“邓弗里斯”禁卫装甲师 "  type = light_armor model = 17 experience = 100 extra = super_heavy_armor brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 412 } name = "泰晤士河要塞 "  type = garrison model = 3 experience = 100 extra = artillery brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 391 } name = "直布罗陀要塞师 "  type = garrison model = 4 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 336 } name = "马耳他基地要塞 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 351 } name = "格拉斯哥要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 352 } name = "亚历山大要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 339 } name = "苏伊士要塞群 "  type = garrison model = 3 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 358 } name = "坎塔拉要塞群 "  type = garrison model = 2 experience = 80 extra = artillery brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 361 } name = "斯托诺韦山地师 "  type = bergsjaeger model = 2 experience = 80 extra = artillery brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 362 } name = "阿伯丁山地师 "  type = bergsjaeger model = 2 experience = 80 extra = artillery brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 363 } name = "因弗内斯山地师 "  type = bergsjaeger model = 2 experience = 80 extra = artillery brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 408 } name = "西北高地山地师 "  type = bergsjaeger model = 2 experience = 80 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 410 } name = "马恩岛山地师 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 370 } name = "科伦坡要塞群 "  type = garrison model = 1 experience = 80 extra = engineer brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 389 } name = "卡拉奇要塞群 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 375 } name = "托布鲁克卫戍师 "  type = motorized model = 29 extra = tank_destroyer brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 376 } name = "班加西卫戍师 "  type = motorized model = 29 extra = tank_destroyer brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 417 } name = "马耳他增援步兵师 "  type = motorized model = 29 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 418 } name = "马耳他增援步兵师 "  type = motorized model = 29 experience = 100 extra = artillery brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 400 } name = "卡拉奇要塞师 "  type = garrison model = 3 experience = 80 extra = artillery brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 3920 } name = "英国陆军第1红魔鬼空降师 "  type = paratrooper model = 1 experience = 80 extra = engineer brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 12700 id = 3921 } name = "英国陆军第七'沙漠之鼠'装甲师 "  type = light_armor model = 17 experience = 80 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 12700 id = 3922 } name = "英国禁卫装甲师 "  type = light_armor model = 17 experience = 60 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 12700 id = 3923 } name = "波兰陆军第一装甲师 "  type = light_armor model = 17 experience = 40 extra = heavy_armor brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 12700 id = 3924 } name = "波兰陆军第一伞兵旅 "  type = paratrooper model = 1 experience = 60 extra = engineer brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 12700 id = 420 } name = "卫戍装甲师 "  type = armor model = 29 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 421 } name = "卫戍装甲师 "  type = armor model = 29 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 422 } name = "近卫装甲师 "  type = light_armor model = 17 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 423 } name = "近卫装甲师 "  type = light_armor model = 17 experience = 100 extra = heavy_armor brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 424 } name = "直布罗陀战区指挥部 "  type = hq model = 2 experience = 100 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 434 } name = "曼德勒卫戍师 "  type = garrison model = 1 experience = 20 extra = artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 435 } name = "加尔各答卫戍师 "  type = garrison model = 2 experience = 60 extra = artillery brigade_model = 2 locked = yes } 

  navaldivision = { dormant = yes id = { type = 12700 id = 60017 } name = "光辉号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 15 }
  navaldivision = { dormant = yes id = { type = 12700 id = 60018 } name = "胜利号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 15 }
  navaldivision = { dormant = yes id = { type = 12700 id = 60019 } name = "可畏号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 15 }
  navaldivision = { dormant = yes id = { type = 12700 id = 60020 } name = "不屈号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 12700 id = 500 } name = "乔治五世号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l extra4 = naval_fire_controll_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 }
  navaldivision = { dormant = yes id = { type = 12700 id = 501 } name = "威尔士亲王号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l extra4 = naval_fire_controll_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 }
  navaldivision = { dormant = yes id = { type = 12700 id = 502 } name = "约克公爵号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l extra4 = naval_fire_controll_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 }
  navaldivision = { dormant = yes id = { type = 12700 id = 503 } name = "豪号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l extra4 = naval_fire_controll_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 }
  navaldivision = { dormant = yes id = { type = 12700 id = 504 } name = "安森号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l extra4 = naval_fire_controll_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 }
  navaldivision = { dormant = yes id = { type = 12700 id = 505 } name = "皇家方舟号 " type = carrier model = 1 extra1 = cag brigade_model1 = 1 }
  navaldivision = { dormant = yes id = { type = 12700 id = 506 } name = "前卫号 " type = battleship model = 6 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l extra4 = naval_fire_controll_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 }
  navaldivision = { dormant = yes id = { type = 12700 id = 425 } name = "皇家君主号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
  navaldivision = { dormant = yes id = { type = 12700 id = 426 } name = "复仇号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
  navaldivision = { dormant = yes id = { type = 12700 id = 427 } name = "决心号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
  navaldivision = { dormant = yes id = { type = 12700 id = 428 } name = "拉米伊号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
  navaldivision = { dormant = yes id = { type = 12700 id = 429 } name = "伊丽莎白女王号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
  navaldivision = { dormant = yes id = { type = 12700 id = 430 } name = "厌战号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
  navaldivision = { dormant = yes id = { type = 12700 id = 431 } name = "巴勒姆号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
  navaldivision = { dormant = yes id = { type = 12700 id = 432 } name = "勇士号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
  navaldivision = { dormant = yes id = { type = 12700 id = 433 } name = "马来亚号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 30 }
}
