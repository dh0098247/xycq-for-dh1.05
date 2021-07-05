##############################
# Country definition for USA #
##############################
province = {
  id = 551 # 阿拉斯加半岛
  supplypool = 500
  oilpool = 100
}
province = { id = 553 supplypool = 1000 } # 朱诺（阿拉斯加狭地）
province = {
  id = 592 # 普拉茨堡
}
province = {
  id = 595 # 康科德（新罕布什尔）
}
province = {
  id = 600 # 波士顿
}
province = {
  id = 602 # 纽约
}
province = {
  id = 603 # 纽瓦克（新泽西）
}
province = {
  id = 604 # 大西洋城
}
province = {
  id = 606 # 华盛顿·哥伦比亚特区
}
province = {
  id = 614 # 匹兹堡
}
province = {
  id = 616 # 底特律
}
province = {
  id = 620 # 芝加哥
}
province = {
  id = 633 # 诺福克（弗吉尼亚）
}
province = {
  id = 637 # 夏洛特
}
province = {
  id = 640 # 路易斯维尔
}
province = {
  id = 644 # 查尔斯顿（南卡罗来纳）
}
province = {
  id = 645 # 哥伦比亚（南卡罗来纳）
}
province = {
  id = 648 # 杰克逊维尔（佛罗里达）
}
province = {
  id = 651 # 迈阿密
}
province = {
  id = 657 # 关塔那摩
  supplypool = 3000
  oilpool = 300
}
province = {
  id = 658 # 夏威夷岛
}
province = {
  id = 662 # 中途岛
  supplypool = 500
}
province = {
  id = 663 # 珍珠港
  supplypool = 5000
  oilpool = 1000
}
province = {
  id = 670 # 亚特兰大
}
province = {
  id = 673 # 孟菲斯（田纳西州）
}
province = {
  id = 676 # 莫比尔
}
province = {
  id = 678 # 比洛克西
}
province = {
  id = 680 # 新奥尔良
}
province = {
  id = 684 # 小石城
}
province = {
  id = 689 # 圣路易斯
}
province = {
  id = 692 # 得梅因
}
province = {
  id = 693 # 明尼阿波利斯
}
province = {
  id = 707 # 丹佛
}
province = {
  id = 713 # 俄克拉荷马城
}
province = {
  id = 716 # 休斯顿
}
province = {
  id = 725 # 圣菲（新墨西哥）
}
province = {
  id = 730 # 菲尼克斯
}
province = {
  id = 733 # 盐湖城
}
province = {
  id = 748 # 科珀斯克里斯蒂
}
province = {
  id = 761 # 圣迭戈（加利福尼亚）
}
province = {
  id = 762 # 洛杉矶
}
province = {
  id = 765 # 旧金山
}
province = {
  id = 780 # 西雅图
}
province = {
  id = 789 # 奥马哈
}
province = {
  id = 889 # 科隆（巴拿马）
  landfort = 10
  supplypool = 1000
  oilpool = 500
}
province = {
  id = 895 # 波多黎各岛
  supplypool = 100
  oilpool = 100
}
province = { id = 1408 supplypool = 500 } # 阿图岛（尼尔群岛）
province = {
  id = 1624 # 關島
  supplypool = 5000
  oilpool = 1000
}
province = { id = 1756 supplypool = 100 } # 美属萨摩亚
province = { id = 1765 supplypool = 100 } # 巴尔米拉环礁
province = { id = 1766 supplypool = 100 } # 约翰斯顿岛
province = {
  id = 1786 # 威克岛
  supplypool = 500
}

#####################
# Country main data #
#####################

country = {
  tag                = USA
  capital            = 606 # 华盛顿·哥伦比亚特区
  manpower           = 2000
  tc_mod                 = 1
  research_mod           = 1.15
  peacetime_ic_mod       = 0.05
  # Resource Reserves
  energy         = 2000
  metal          = 2000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 1000
  transports     = 3000
  escorts        = 1000

  diplomacy = {
    relation = {
      tag        = ARG
      value      = 75
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = AST value = 125 }
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 100 }
    relation = {
      tag        = BOL
      value      = 85
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = BRA
      value      = 120
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = CAN
      value      = 175
      access     = yes
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = DEN value = 100 }
    relation = {
      tag        = CHL
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = COL
      value      = 75
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = COS
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = CUB
      value      = 200
      access     = yes
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = DOM
      value      = 125
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = ECU
      value      = 75
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 90 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = -10 }
    relation = {
      tag        = GUA
      value      = 125
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = HAI
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = HOL value = 70 }
    relation = {
      tag        = HON
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 120 }
    relation = { tag = JAP value = 15 }
    relation = { tag = LIB value = 200 access = yes }
    relation = { tag = MAN value = 1 }
    relation = {
      tag        = MEX
      value      = 125
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = NEP value = 100 }
    relation = {
      tag        = NIC
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = IRE
      value      = 80
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 125 }
    relation = { tag = OMN value = 100 }
    relation = {
      tag        = PAN
      value      = 175
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = PAR
      value      = 75
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = PHI value = 200 access = yes }
    relation = {
      tag        = PRU
      value      = 75
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = SAF value = 125 }
    relation = {
      tag        = SAL
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = SOV value = 35 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = SWE value = 75 }
    relation = {
      tag        = URU
      value      = 100
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = VEN
      value      = 125
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = YEM value = 100 }
  }
  SpyInfo                = { country = "USA" NumberOfSpies = 4 }

  nationalprovinces      = { 1407 1408 2604 3987 3988 3989 3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 4001 4002 4003 4004 4005 4006 4007 4008 4009 4010 4011 4012 4077 542 543 544 545 546 547 548 549 550 551 553 582 583 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 715 716 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 746 748 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 778 779 780 781 782 783 784 785 786 787 788 789 790 791 792 793 889 895 1406 662 663 661 660 659 658 1624 1786 }
  ownedprovinces         = { 1407 1408 1624 1756 1764 1765 1766 1786 2604 3969 3987 3988 3989 3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 4001 4002 4003 4004 4005 4006 4007 4008 4009 4010 4011 4012 4077 542 543 544 545 546 547 548 549 550 551 553 582 583 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 658 659 660 661 662 663 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 715 716 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 746 748 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 778 779 780 781 782 783 784 785 786 787 788 789 790 791 792 793 889 895 1406 657 }
  controlledprovinces    = { 1407 1408 1624 1756 1764 1765 1766 1786 2604 3969 3987 3988 3989 3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 4001 4002 4003 4004 4005 4006 4007 4008 4009 4010 4011 4012 4077 542 543 544 545 546 547 548 549 550 551 553 582 583 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 658 659 660 661 662 663 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 715 716 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 746 748 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 778 779 780 781 782 783 784 785 786 787 788 789 790 791 792 793 889 895 1406 657 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5060 5090 5200 5810 5120 5070 5210 5820 5140 5180 5660 5670 5680 5310 5010 5470 5480 1010 1020 1100 1110 1710 1830 1840 1850 2280 2290 2610 2300 2620 2420 2430 2540 2550 2010 2020 3490 3550 3560 3600 3610 3620 3010 3020 3070 3080 3130 3140 3250 3260 3320 3330 3650 3660 3820 3410 3760 6010 6020 6030 6040 6050 6100 6320 6390 6480 6400 6460 4120 4130 4250 4220 4010 4020 8010 8020 8390 8150 8030 8040 8200 8160 8530 8570 9700 9710 9010 9020 7400 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    freedom           = 10
    free_market       = 10
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 6001 } # 富兰克林 D. 罗斯福 
  headofgovernment       = { type = 9 id = 6002 } # 约翰 南斯 加纳 
  foreignminister        = { type = 9 id = 6003 } # 科德尔 赫尔 
  armamentminister       = { type = 9 id = 6077 } # 亨利 摩根索 
  ministerofsecurity     = { type = 9 id = 6005 } # J. 埃德加 胡佛 
  ministerofintelligence = { type = 9 id = 6006 } # 威廉 F. 弗里德曼 
  chiefofstaff           = { type = 9 id = 6007 } # 马林 克雷格 
  chiefofarmy            = { type = 9 id = 6008 } # 马林 克雷格 
  chiefofnavy            = { type = 9 id = 6158 } # 威廉 H. 斯坦德利 
  chiefofair             = { type = 9 id = 6010 } # 奥斯卡 韦斯托弗 

  landunit = {
    id       = { type = 14800 id = 3 }
    name     = "美国第I集团军 "
    location = 603
    division = {
      id             = { type = 14800 id = 4 }
      name           = "第1'大红一'师 "
      type           = motorized
      model          = 27
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 14800 id = 5 }
    name     = "美国第II集团军 "
    location = 606
    division = {
      id             = { type = 14800 id = 6 }
      name           = "第2'印地安人'师 "
      type           = motorized
      model          = 27
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 14800 id = 7 }
    name     = "美国第III集团军 "
    location = 762
    division = {
      id             = { type = 14800 id = 8 }
      name           = "第3'马恩磐石'师 "
      type           = motorized
      model          = 27
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 14800 id = 9 }
    name     = "合众国快速骑兵师 "
    location = 707
    division = {
      id             = { type = 14800 id = 10 }
      name           = "第1'第一队'骑兵师 "
      type           = cavalry
      model          = 49
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 14800 id = 11 }
    name     = "菲律宾警备军 "
    location = 1737
    division = {
      id             = { type = 14800 id = 12 }
      name           = "菲律宾警卫师 "
      type           = infantry
      model          = 27
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14800 id = 160 }
    name     = "巴拿马运河守备军 "
    location = 889
    division = {
      id             = { type = 14800 id = 161 }
      name           = "巴拿马基地卫戍师 "
      type           = garrison
      model          = 3
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14800 id = 162 }
    name     = "夏威夷警备军 "
    location = 658
    division = {
      id             = { type = 14800 id = 163 }
      name           = "夏威夷师 "
      type           = motorized
      model          = 27
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 14800 id = 164 }
    name     = "美国海军陆战司令部 "
    location = 603
    division = {
      id             = { type = 14800 id = 165 }
      name           = "美国第1陆战旅 "
      type           = marine
      model          = 8
      strength       = 40
      experience     = 50
    }
    division = {
      id             = { type = 14800 id = 166 }
      name           = "美国第2陆战旅 "
      type           = marine
      model          = 8
      strength       = 40
      experience     = 50
    }
  }

  navalunit = {
    id       = { type = 14800 id = 26 }
    name     = "第I战列舰战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 27 }
      name           = "列克星敦号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
    }
    division = {
      id             = { type = 14800 id = 28 }
      name           = "内华达号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 29 }
      name           = "亚利桑那号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 30 }
      name           = "宾夕法尼亚号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 31 }
    name     = "第II战列舰战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 32 }
      name           = "萨拉托加号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
    }
    division = {
      id             = { type = 14800 id = 33 }
      name           = "俄克拉荷马号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 34 }
      name           = "田纳西号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 35 }
      name           = "加利福尼亚号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 36 }
    name     = "第IV战列舰战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 37 }
      name           = "科罗拉多号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 38 }
      name           = "西弗吉尼亚号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 39 }
      name           = "马里兰号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 40 }
    name     = "第III巡洋舰战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 41 }
      name           = "列治文号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 14800 id = 42 }
      name           = "特伦顿号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 14800 id = 43 }
      name           = "康克德号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 14800 id = 44 }
      name           = "罗利号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 14800 id = 45 }
      name           = "底特律号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 46 }
    name     = "第IV巡洋舰战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 47 }
      name           = "彭萨克拉号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 48 }
      name           = "盐湖城号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 49 }
      name           = "芝加哥号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 50 }
      name           = "印地安娜波利斯号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 2
      brigade_model3 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 51 }
    name     = "第V巡洋舰战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 52 }
      name           = "北安普顿号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 53 }
      name           = "切斯特号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 54 }
      name           = "路易斯维尔号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 55 }
      name           = "波特兰号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 56 }
    name     = "第VI巡洋舰战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 57 }
      name           = "新奥尔良号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 58 }
      name           = "阿斯托里亚号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 59 }
      name           = "明尼阿波里斯号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 60 }
      name           = "三番号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 61 }
    name     = "太平洋驱逐舰战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 62 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 63 }
      name           = "第2驱逐舰编队 "
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 64 }
      name           = "第3驱逐舰编队 "
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 74 }
    name     = "太平洋潜艇战队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 75 }
      name           = "S-1号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 76 }
      name           = "S-2号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 77 }
      name           = "S-3号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 78 }
      name           = "S-4号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 79 }
      name           = "S-5号 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 80 }
      name           = "S-6号 "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 14800 id = 81 }
    name     = "美国太平洋舰队 "
    location = 1737
    base     = 1737
    division = {
      id             = { type = 14800 id = 82 }
      name           = "第13驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 83 }
      name           = "第14驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 84 }
      name           = "第15驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 179 }
      name           = "第31驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 180 }
      name           = "第32驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 85 }
      name           = "S-7号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 86 }
      name           = "S-8号 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 87 }
    name     = "第II潜艇战队 "
    location = 1737
    base     = 1737
    division = {
      id             = { type = 14800 id = 88 }
      name           = "S-9号 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 89 }
    name     = "美国西雅图舰队 "
    location = 780
    base     = 780
    division = {
      id             = { type = 14800 id = 90 }
      name           = "马波海德号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 91 }
      name           = "第16驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 189 }
      name           = "第47驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 14800 id = 92 }
    name     = "美国哥伦比亚舰队 "
    location = 780
    base     = 780
    division = {
      id             = { type = 14800 id = 93 }
      name           = "休斯顿号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 192 }
      name           = "第43驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 94 }
      name           = "S-10号 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 95 }
    name     = "美国加勒比舰队 "
    location = 889
    base     = 889
    division = {
      id             = { type = 14800 id = 96 }
      name           = "第17驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 97 }
      name           = "S-11号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 190 }
      name           = "第41驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 191 }
      name           = "第42驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 14800 id = 98 }
    name     = "第III战列舰战队 "
    location = 633
    base     = 633
    division = {
      id             = { type = 14800 id = 99 }
      name           = "新墨西哥号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 100 }
      name           = "密西西比号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 101 }
      name           = "爱达荷号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 193 }
      name           = "第44驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 194 }
      name           = "第45驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 195 }
      name           = "第46驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 14800 id = 102 }
    name     = "第V战列舰战队 "
    location = 633
    base     = 633
    division = {
      id             = { type = 14800 id = 103 }
      name           = "阿肯色号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 104 }
      name           = "纽约号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
    division = {
      id             = { type = 14800 id = 105 }
      name           = "德克萨斯号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 2
      brigade_model4 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 106 }
    name     = "第II巡洋舰战队 "
    location = 633
    base     = 633
    division = {
      id             = { type = 14800 id = 107 }
      name           = "奥玛哈号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 14800 id = 108 }
      name           = "密尔沃基号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 14800 id = 109 }
      name           = "辛辛那提号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 14800 id = 110 }
      name           = "孟菲斯号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 111 }
    name     = "第VII巡洋舰战队 "
    location = 633
    base     = 633
    division = {
      id             = { type = 14800 id = 112 }
      name           = "奥古斯塔号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 14800 id = 113 }
      name           = "塔斯卡卢萨号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 114 }
    name     = "游骑兵工程舰队 "
    location = 633
    base     = 633
    division = {
      id             = { type = 14800 id = 115 }
      name           = "游骑兵号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
    }
    division = {
      id             = { type = 14800 id = 116 }
      name           = "第18驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 117 }
      name           = "第19驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 118 }
      name           = "第20驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 119 }
      name           = "第21驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 120 }
      name           = "第22驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 121 }
      name           = "第23驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 172 }
      name           = "第24驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 173 }
      name           = "第25驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 174 }
      name           = "第26驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 175 }
      name           = "第27驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 176 }
      name           = "第28驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 14800 id = 122 }
    name     = "大西洋潜艇战队 "
    location = 633
    base     = 633
    division = {
      id             = { type = 14800 id = 123 }
      name           = "S-12号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 124 }
      name           = "S-13号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 125 }
      name           = "S-14号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 126 }
      name           = "S-15号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 127 }
      name           = "S-16号 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 128 }
      name           = "S-17号 "
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 133 }
    name     = "大西洋运输舰队 "
    location = 633
    base     = 633
    division = {
      id             = { type = 14800 id = 134 }
      name           = "阿布尔·道布尔迪号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 135 }
      name           = "伯明罕号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 136 }
      name           = "旅行者威廉号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 137 }
      name           = "皮特·斯塔桑号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 138 }
      name           = "亨利·班宁号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 139 }
      name           = "布拉斯基号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 140 }
      name           = "山姆·休斯顿号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 141 }
      name           = "佛朗西斯·斯科特·克伊号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 142 }
      name           = "华特·里德号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 143 }
      name           = "桃莉·麦迪森号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 144 }
      name           = "弗雷德里克·道格拉斯号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 145 }
      name           = "克拉拉·巴顿号 "
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 14800 id = 146 }
    name     = "太平洋运输舰队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 147 }
      name           = "查理·古德伊尔号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 148 }
      name           = "安东尼·韦恩号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 149 }
      name           = "约翰·汉考克号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 150 }
      name           = "威廉·麦金雷什特号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 151 }
      name           = "克莱恩·斯蒂芬号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 152 }
      name           = "威廉·麦金利号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 153 }
      name           = "乔治·卡斯特号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 154 }
      name           = "奥古斯特·贝尔蒙号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 156 }
      name           = "艾米莉·狄金森号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 157 }
      name           = "莫莉·皮齐尔号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 158 }
      name           = "安东尼·德沃夏克号 "
      type           = transport
    }
    division = {
      id             = { type = 14800 id = 159 }
      name           = "斯图亚特号 "
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 14800 id = 13 }
    name     = "美国第I航空队 "
    location = 761
    base     = 761
    division = {
      id             = { type = 14800 id = 14 }
      name           = "第6战斗机联队 "
      type           = interceptor
      model          = 1
    }
  }
  airunit = { 
    id       = { type = 14800 id = 15 }
    name     = "美国第II航空队 "
    location = 780
    base     = 780
    division = {
      id             = { type = 14800 id = 16 }
      name           = "第2战略轰炸机联队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
    }
  }
  airunit = { 
    id       = { type = 14800 id = 17 }
    name     = "美国第XI航空队 "
    location = 606
    base     = 606
    division = {
      id             = { type = 14800 id = 18 }
      name           = "第1战术轰炸机联队 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
    }
  }
  airunit = { 
    id       = { type = 14800 id = 19 }
    name     = "美国第V航空队 "
    location = 889
    base     = 889
    division = {
      id             = { type = 14800 id = 20 }
      name           = "第5战术轰炸机联队 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
    }
  }
  airunit = { 
    id       = { type = 14800 id = 21 }
    name     = "美国第VII航空队 "
    location = 780
    base     = 780
    division = {
      id             = { type = 14800 id = 22 }
      name           = "第47战术轰炸机联队 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
    }
  }
  airunit = { 
    id       = { type = 14800 id = 23 }
    name     = "美国第10空军机群 "
    location = 602
    base     = 602
    division = {
      id             = { type = 14800 id = 24 }
      name           = "第9战斗机联队 "
      type           = interceptor
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 25 }
      name           = "第2战术轰炸机联队 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
    }
  }

  province_development = {
    id             = { type = 14800 id = 10000 }
    location       = 602
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10001 }
    location       = 603
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10002 }
    location       = 608
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10003 }
    location       = 620
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10004 }
    location       = 604
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10005 }
    location       = 614
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10006 }
    location       = 616
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10007 }
    location       = 615
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10008 }
    location       = 628
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10009 }
    location       = 600
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10010 }
    location       = 606
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10011 }
    location       = 609
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10012 }
    location       = 641
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10013 }
    location       = 640
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10014 }
    location       = 613
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10015 }
    location       = 716
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10016 }
    location       = 767
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10017 }
    location       = 4010
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10018 }
    location       = 681
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10019 }
    location       = 684
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10020 }
    location       = 627
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10021 }
    location       = 721
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10022 }
    location       = 715
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10023 }
    location       = 762
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10024 }
    location       = 763
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14800 id = 10025 }
    location       = 793
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }

  landdivision = { dormant = yes id = { type = 14800 id = 9999 } name = "都柏林卫戍旅 "  type = garrison model = 3 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 9998 } name = "直布罗陀卫戍师 "  type = garrison model = 3 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 9994 } name = "马耳他卫戍旅 "  type = marine model = 10 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 601 } name = "亚速尔卫戍师 "  type = marine model = 12 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 602 } name = "百慕大基地卫戍师 "  type = marine model = 12 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 603 } name = "珍珠港基地卫戍师 "  type = garrison model = 2 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 604 } name = "华盛顿要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 605 } name = "纽约要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 608 } name = "波士顿要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 609 } name = "诺福克要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 611 } name = "库帕斯克里斯蒂卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 612 } name = "洛杉矶要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 613 } name = "圣选戈要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 614 } name = "旧金山要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 616 } name = "迈阿密要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 621 } name = "白宫要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 622 } name = "五角大楼要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 623 } name = "大西洋城要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 624 } name = "西雅图要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 625 } name = "纽瓦克要塞卫戍师 "  type = garrison model = 4 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 600 } name = "冰岛基地卫戍师 "  type = garrison model = 1 extra = engineer brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 6190 } name = "美利坚第二'活动的地狱'装甲师 "  type = light_armor model = 17 max_strength = 100 experience = 60 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6191 } name = "美利坚海军陆战第一‘神话’师 "  type = marine model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6196 } name = "美利坚第101‘嚎叫的鹰’空降师 "  type = paratrooper model = 9 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6197 } name = "美利坚第82‘全美’空降师 "  type = paratrooper model = 9 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6198 } name = "美利坚第二'活动的地狱'装甲师 "  type = light_armor model = 19 strength = 100 experience = 80 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6199 } name = "美利坚海军陆战第一‘神话’师 "  type = marine model = 12 strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6200 } name = "美利坚第101‘嚎叫的鹰’空降师 "  type = paratrooper model = 10 strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6201 } name = "美利坚第82‘全美’空降师 "  type = paratrooper model = 10 strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6202 } name = "美国第10装甲师 "  type = light_armor model = 19 max_strength = 100 experience = 80 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6203 } name = "美国海军陆战第10师 "  type = marine model = 12 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6204 } name = "美国第110空降师 "  type = paratrooper model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6205 } name = "美利坚第111空降师 "  type = paratrooper model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6206 } name = "美国第11装甲师 "  type = light_armor model = 19 max_strength = 100 experience = 80 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6207 } name = "美国海军陆战第11师 "  type = marine model = 12 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6208 } name = "美国第120空降师 "  type = paratrooper model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6209 } name = "美利坚第121空降师 "  type = paratrooper model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6210 } name = "美国第12装甲师 "  type = light_armor model = 19 max_strength = 100 experience = 80 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6211 } name = "美国海军陆战第12师 "  type = marine model = 12 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6212 } name = "美国第126空降师 "  type = paratrooper model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6213 } name = "美利坚第126空降师 "  type = paratrooper model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6214 } name = "美国第13装甲师 "  type = light_armor model = 19 max_strength = 100 experience = 80 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6215 } name = "美国海军陆战第13师 "  type = marine model = 12 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6216 } name = "美国第123空降师 "  type = paratrooper model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 6217 } name = "美利坚第128空降师 "  type = paratrooper model = 10 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14800 id = 700 } name = "关岛守备队 "  type = motorized model = 29 max_strength = 100 experience = 60 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 701 } name = "威克守备队 "  type = motorized model = 29 max_strength = 100 experience = 60 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 702 } name = "新几内亚守备队 "  type = marine model = 11 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 703 } name = "新几内亚守备队 "  type = marine model = 11 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 704 } name = "新几内亚守备队 "  type = marine model = 11 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 705 } name = "美国海军陆战第1师 "  type = marine model = 12 max_strength = 100 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 706 } name = "莫尔兹比港守备队 "  type = motorized model = 29 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 707 } name = "瓜岛守备队 "  type = marine model = 11 max_strength = 100 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 710 } name = "中途岛基地要塞 "  type = garrison model = 2 max_strength = 100 experience = 80 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 714 } name = "瓜岛基地要塞 "  type = garrison model = 2 max_strength = 100 experience = 100 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 720 } name = "塞班岛基地要塞 "  type = garrison model = 2 max_strength = 100 experience = 100 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 721 } name = "关岛基地要塞 "  type = garrison model = 2 max_strength = 100 experience = 100 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 759 } name = "莱特岛基地要塞 "  type = garrison model = 2 max_strength = 100 experience = 100 extra = engineer brigade_model = 2 locked = yes } 

  navaldivision = { dormant = yes id = { type = 14800 id = 500 } name = "约克城号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14800 id = 512 } name = "企业号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14800 id = 6192 } name = "大黄蜂号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14800 id = 6193 } name = "埃塞克斯号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14800 id = 6194 } name = "好人理查德号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 strength = 100 experience = 15 }
  navaldivision = { dormant = yes id = { type = 14800 id = 6195 } name = "邦克山号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 strength = 100 experience = 15 }
  navaldivision = { dormant = yes id = { type = 14800 id = 502 } name = "北卡罗来纳号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 14800 id = 503 } name = "华盛顿号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 14800 id = 504 } name = "南达科他号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 }
  navaldivision = { dormant = yes id = { type = 14800 id = 505 } name = "马萨诸塞号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 }
  navaldivision = { dormant = yes id = { type = 14800 id = 506 } name = "印第安纳号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 }
  navaldivision = { dormant = yes id = { type = 14800 id = 507 } name = "阿拉巴马号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 }
  navaldivision = { dormant = yes id = { type = 14800 id = 508 } name = "衣阿华号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 3 brigade_model2 = 3 brigade_model3 = 3 }
  navaldivision = { dormant = yes id = { type = 14800 id = 509 } name = "新泽西号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 3 brigade_model2 = 3 brigade_model3 = 3 }
  navaldivision = { dormant = yes id = { type = 14800 id = 510 } name = "密苏里号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 3 brigade_model2 = 3 brigade_model3 = 3 }
  navaldivision = { dormant = yes id = { type = 14800 id = 511 } name = "威斯康辛号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 3 brigade_model2 = 3 brigade_model3 = 3 }
  navaldivision = { dormant = yes id = { type = 14800 id = 501 } name = "昆西号 " type = heavy_cruiser model = 1 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 14800 id = 513 } name = "蒙大拿号 " type = battleship model = 5 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l extra4 = naval_fire_controll_l extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14800 id = 514 } name = "俄亥俄号 " type = battleship model = 6 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l extra4 = naval_fire_controll_l extra5 = naval_improved_hull_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 brigade_model5 = 0 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14800 id = 515 } name = "雪風 " type = destroyer model = 4 extra1 = naval_improved_hull_s brigade_model1 = 1 strength = 100 experience = 100 }
  navaldivision = { dormant = yes id = { type = 14800 id = 708 } name = "☆列克星敦号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14800 id = 709 } name = "☆约克城号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14800 id = 711 } name = "☆企业号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 80 }
  navaldivision = { dormant = yes id = { type = 14800 id = 712 } name = "☆约克城号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 713 } name = "☆大黄蜂号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14800 id = 715 } name = "☆企业号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 80 }
  navaldivision = { dormant = yes id = { type = 14800 id = 716 } name = "☆萨拉托加号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 717 } name = "☆大黄蜂号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14800 id = 718 } name = "☆华盛顿号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 719 } name = "☆南达科他号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_improved_hull_l extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 0 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 722 } name = "★列克星敦号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 723 } name = "★大黄蜂号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 724 } name = "★约克城号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 725 } name = "★贝劳森林号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 726 } name = "★巴丹号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 727 } name = "★邦克山号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 728 } name = "★胡峰号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 729 } name = "★蒙特利号 " type = escort_carrier model = 1 extra1 = b_01 brigade_model1 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14800 id = 730 } name = "★卡伯特号 " type = escort_carrier model = 1 extra1 = b_01 brigade_model1 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14800 id = 731 } name = "★企业号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 732 } name = "★普林斯顿号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 733 } name = "★圣贾辛托号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 734 } name = "★埃塞克斯号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 735 } name = "★兰利号 " type = escort_carrier model = 1 extra1 = b_01 brigade_model1 = 1 experience = 40 }
  navaldivision = { dormant = yes id = { type = 14800 id = 736 } name = "★科本斯号 " type = escort_carrier model = 1 extra1 = b_01 brigade_model1 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14800 id = 737 } name = "★华盛顿号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 738 } name = "★北卡罗来纳号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 739 } name = "★衣阿华号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 3 brigade_model2 = 3 brigade_model3 = 3 brigade_model4 = 3 experience = 60 }
  navaldivision = { dormant = yes id = { type = 14800 id = 740 } name = "★新泽西号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 3 brigade_model2 = 3 brigade_model3 = 3 brigade_model4 = 3 experience = 60 }
  navaldivision = { dormant = yes id = { type = 14800 id = 741 } name = "★南达科他号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_improved_hull_l extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 0 brigade_model4 = 2 experience = 60 }
  navaldivision = { dormant = yes id = { type = 14800 id = 742 } name = "★阿拉巴马号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 743 } name = "★印第安纳号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 744 } name = "★列克星敦号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 745 } name = "★大黄蜂号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 746 } name = "★胡峰号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 747 } name = "★汉考克号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 748 } name = "★无畏号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 749 } name = "★邦克山号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 750 } name = "★埃塞克斯号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 751 } name = "★富兰克林号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 752 } name = "★企业号 " type = carrier model = 3 extra1 = cag brigade_model1 = 3 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 753 } name = "★新泽西号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 3 brigade_model2 = 3 brigade_model3 = 3 brigade_model4 = 3 experience = 60 }
  navaldivision = { dormant = yes id = { type = 14800 id = 754 } name = "★衣阿华号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 3 brigade_model2 = 3 brigade_model3 = 3 brigade_model4 = 3 experience = 60 }
  navaldivision = { dormant = yes id = { type = 14800 id = 755 } name = "★华盛顿号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 756 } name = "★马萨诸塞号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 757 } name = "★南达科他号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_improved_hull_l extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 0 brigade_model4 = 2 experience = 60 }
  navaldivision = { dormant = yes id = { type = 14800 id = 758 } name = "★阿拉巴马号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 brigade_model3 = 2 brigade_model4 = 2 experience = 50 }
  navaldivision = { dormant = yes id = { type = 14800 id = 760 } name = "新墨西哥号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14800 id = 761 } name = "阿肯色号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14800 id = 762 } name = "纽约号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14800 id = 763 } name = "德克萨斯号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
}
