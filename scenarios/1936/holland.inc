##############################
# Country definition for HOL #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = HOL
  capital                = 47
  manpower               = 350

	research_mod = 1.00
        extra_tc = 10
	tc_mod = 1.00
	peacetime_ic_mod = 0.60

  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 400
  transports             = 800
  escorts                = 200
  diplomacy =
  { relation = { tag = BEL value = 150 }
    relation = { tag = CAN value = 80 }
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -20 }
    relation = { tag = JAP value = -50 }
    relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
    relation =
    { tag        = DEN
      value      = 100
    }
  }
   SpyInfo                = {  country = "HOL" NumberOfSpies = 1  } 
  nationalprovinces      = { 1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1645 1648
                             1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1663 1664 1665 1673 1674 3056 3057 3058 3744 3745 3746 3747
                             3748 3749 3750 3751 3753 3754 3755 3756 3757 3758 3759 3760 46   47   48   49   77   78   79   801  874 
                           }
  # Homeland
  ownedprovinces         = { 1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1645 1648
                             1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1663 1664 1665 1673 1674 3056 3057 3058 3744 3745 3746 3747
                             3748 3749 3750 3751 3753 3754 3755 3756 3757 3758 3759 3760 46   47   48   49   77   78   79   801  874 
                           }
  # Homeland
  controlledprovinces    = { 1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1645 1648
                             1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1663 1664 1665 1673 1674 3056 3057 3058 3744 3745 3746 3747
                             3748 3749 3750 3751 3753 3754 3755 3756 3757 3758 3759 3760 46   47   48   49   77   78   79   801  874 
                           }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110 5090 5060 5200 5810 5120
                             5180 5660 5670 5680 
                             5310 5010 5470
                             1010 1020 1100
                             2280 2290 2610 2300 2420 2540
                             3490 3550 3600 3610 3620 3010 3070 3130 3250 3410
                             4120 4010
                             6010 6020 6030 6040 6050 6100
                             8010 8020 8030 8150 8390 8040
                             9010 
                             7420 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 9
    freedom           = 10
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 8001 }
  headofgovernment       = { type = 9 id = 8002 }
  foreignminister        = { type = 9 id = 8003 }
  armamentminister       = { type = 9 id = 8004 }
  ministerofsecurity     = { type = 9 id = 8005 }
  ministerofintelligence = { type = 9 id = 8006 }
  chiefofstaff           = { type = 9 id = 8007 }
  chiefofarmy            = { type = 9 id = 8008 }
  chiefofnavy            = { type = 9 id = 8009 }
  chiefofair             = { type = 9 id = 8010 }

  landunit =
  { id       = { type = 18500 id = 1 }
    location = 47
    name     = "荷兰第I军 "
    division =
    { id    = { type = 18500 id = 2 }
      name  = "第1步兵师 "
      type  = motorized
      extra = artillery
      experience = 20
    }
    division =
    { id   = { type = 18500 id = 3 }
      name = "第2步兵师 "
      type = motorized
      experience = 20
    }
  }
  landunit =
  { id       = { type = 18500 id = 4 }
    location = 77
    name     = "荷兰第II军 "
    division =
    { id    = { type = 18500 id = 5 }
      name  = "第3步兵师 "
      type  = motorized
      extra = artillery
      experience = 20
    }
    division =
    { id   = { type = 18500 id = 6 }
      name = "第4步兵师 "
      type = motorized
      experience = 10
    }
  }
  landunit =
  { id       = { type = 18500 id = 7 }
    location = 49
    name     = "荷兰第III军 "
    division =
    { id    = { type = 18500 id = 8 }
      name  = "第5步兵师 "
      type  = motorized
      extra = artillery
      experience = 20
    }
    division =
    { id   = { type = 18500 id = 9 }
      name = "第6步兵师 "
      type = motorized
      experience = 10
    }
  }
  landunit =
  { id       = { type = 18500 id = 10 }
    location = 79
    name     = "荷兰第IV军 "
    division =
    { id    = { type = 18500 id = 11 }
      name  = "第7步兵师 "
      type  = motorized
      extra = artillery
      experience = 20
    }
    division =
    { id   = { type = 18500 id = 12 }
      name = "第8步兵师 "
      type = motorized
      experience = 10
    }
  }
  landunit =
  { id       = { type = 18500 id = 13 }
    location = 1628
    name     = "荷兰东印殖民军 "
    division =
    { id   = { type = 18500 id = 14 }
      name = "第1'爪哇'步兵师 "
      type = militia
      experience = 10
    }
    division =
    { id   = { type = 18500 id = 15 }
      name = "第2'爪哇'步兵师 "
      type = militia
      experience = 10
    }
    division =
    { id   = { type = 18500 id = 16 }
      name = "第3'爪哇'步兵师 "
      type = militia
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 18500 id = 17 }
    location = 47
    base     = 47
    name     = "荷兰巡航舰队 "
    division =
    { id    = { type = 18500 id = 18 }
      name  = "德瑞特号 "
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 18500 id = 19 }
      name  = "爪哇号 "
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 18500 id = 20 }
      name  = "苏门达腊号 "
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 18500 id = 21 }
      name  = "第1驱逐舰编队 "
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 18500 id = 22 }
      name  = "第2驱逐舰编队 "
      type  = destroyer
      model = 1
      extra1 = naval_anti_air_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 18500 id = 39 }
      name  = "第1潜艇编队 "
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 18500 id = 40 }
      name  = "第2潜艇编队 "
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 18500 id = 41 }
      name  = "第3潜艇编队 "
      type  = submarine
      model = 2
    }
    division =
    { id   = { type = 18500 id = 23 }
      name = "第1运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 18500 id = 24 }
      name = "第2运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 18500 id = 25 }
      name = "第3运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 18500 id = 26 }
      name = "第4运输舰编队 "
      type = transport
    }
  }
}
