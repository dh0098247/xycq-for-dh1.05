##############################
# Country definition for CSX #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = CSX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 20
  # Resource Reserves
  energy                 = 1000
  metal                  = 500
  rare_materials         = 500
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1225 # Taiyuan

	research_mod = 1.00
	peacetime_ic_mod = 0.85

  manpower               = 400
  dissent                = 15
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 1207 1208 1209 1225 1226 1271 1272 1439
                             2785 2787 2788 2789 2790 2791 2792 2794 2796 2811 2812
                             2813 2814 2815 2816 2817 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837
                           }
  ownedprovinces         = { 1207 1208 1209 1225 1226 1272 1439 2785
                             2812 2813 2814 2815 2816 2817 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836
                             2837
                           }
  controlledprovinces    = { 1207 1208 1209 1225 1226 1272 1439 2785
                             2812 2813 2814 2815 2816 2817 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836
                             2837
                           }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050
                             5180
                             1010 1100
                             6050 6010
                             7410
                           }
  diplomacy =
  { relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
    relation = { tag = u01 value = 120 }
    relation = { tag = u02 value = 120 }
  }
  headofstate            = { type = 9 id = 503001 }
  headofgovernment       = { type = 9 id = 503002 }
  foreignminister        = { type = 9 id = 503003 }
  armamentminister       = { type = 9 id = 503004 }
  ministerofsecurity     = { type = 9 id = 503014 }
  ministerofintelligence = { type = 9 id = 503006 }
  chiefofstaff           = { type = 9 id = 503012 }
  chiefofarmy            = { type = 9 id = 503008 }
  chiefofnavy            = { type = 9 id = 503009 }
  chiefofair             = { type = 9 id = 503010 }
  # ######
  # SHANXI Land 1936 OOB
  # TYPE: 22300
  # ######
 landunit =
  { location = 1225 # Taiyuan
    name     = "晉綏軍-國民革命軍第19軍 "
    leader   = 503010 # 王靖國
    id       = { type = 22300 id = 1019 }
    division =
    { experience = 20
      id         = { type = 22300 id = 68 }
      name       = "晉綏軍-陸軍第68師 "
      type       = infantry
      strength = 70
      model      = 37
      extra = police
    }
    division =
    { experience = 20
      id         = { type = 22300 id = 70 }
      name       = "晉綏軍-陸軍第70師 "
      type       = infantry
      strength     = 70
      model      = 37
      extra = police
    }
  }

  landunit =
  { location = 1226 # Changzhi
    name     = "國民革命軍第33軍 "
    id       = { type = 22300 id = 1033 }
    division =
    { id       = { type = 22300 id = 66 }
      name     = "陸軍第66師 "
      type     = infantry
      strength = 70
      model    = 37
      extra = artillery
      brigade_model = 1
    }
    division =
    { id       = { type = 22300 id = 803 }
      name     = "陸軍獨立第3旅 "
      type     = infantry
      strength = 30
      model    = 37
      extra = engineer
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "國民革命軍第34軍 "
    id       = { type = 22300 id = 1034 }
    division =
    { id       = { type = 22300 id = 71 }
      name     = "陸軍第71師 "
      type     = infantry
      strength = 70
      model    = 37
      extra = police
    }
    division =
    { id       = { type = 22300 id = 807 }
      name     = "陸軍獨立第7旅 "
      type     = infantry
      strength = 30
      model    = 37
    }
  }

  landunit =
  { location = 1207 # 集寧
    name     = "國民革命軍第35'晉綏之劍'軍 "
    leader   = 503001 # 傅作義
    id       = { type = 22300 id = 1035 }
    division =
    { id       = { type = 22300 id = 73 }
      name     = "陸軍第68師 "
      type     = cavalry
      strength = 100
      experience = 60
      model = 13
      extra = light_armor_brigade
      brigade_model    = 1
    }
    division =
    { id       = { type = 22300 id = 101 }
      name     = "陸軍第101師 "
      type     = Mechanized
      strength = 100
      experience = 40
      max_strength = 100
      model = 19
      extra = armored_car
      brigade_model    = 0
    }
    division =
    { id       = { type = 22300 id = 808 }
      name     = "陸軍獨立第8旅 "
       type     = cavalry
      strength = 90
      experience = 30
      max_strength = 100
      model = 13
      extra = armored_car
      brigade_model    = 0
    }
  }


  landunit =
  { location = 1209 # Datong
    name     = "國民革命軍第61軍 "
    leader   = 503003 # 李服膺
    id       = { type = 22300 id = 1061 }
    division =
    { experience = 20
      id         = { type = 22300 id = 69}
      name       = "晉綏軍-陸軍第69師 "
      type       = infantry
      strength = 70
      model      = 37
      extra = artillery
      brigade_model = 0
    }
    division =
    { experience = 20
      id         = { type = 22300 id = 72 }
      name       = "晉綏軍-陸軍第72師 "
      type       = infantry
      strength = 70
      model      = 37
      extra = artillery
      brigade_model = 1
    }
  }

landunit =
  { location = 1207 # Beiping
	name     = "國民革命軍騎兵第1軍 "
	leader   = 503020 # 趙承綬
    id       = { type = 22300 id = 1201 }
    division =
    { experience = 20
      id         = { type = 22300 id = 1301 }
      name       = "騎兵第1師（騎1軍-晉綏軍） "
      type       = cavalry
      model = 12
      strength     = 70
    }
    division =
    { experience = 20
      id         = { type = 22300 id = 1302 }
      name       = "騎兵第2師（騎1軍-晉綏軍） "
      type       = cavalry
      model = 12
      strength     = 70
    }
    dig_in   = 20.000
  }

  landunit =
  { location = 1207 # 銀川
    name     = "綏省綏靖公署 "
    id       = { type = 22300 id = 413 }
    division =
    { id       = { type = 22300 id = 713 }
      name     = "綏遠保安總隊 "
      type     = militia
      strength     = 60
      model    = 9
    }
  }


  landunit =
  { location = 1225 # 太原
    name     = "晉省綏靖公署 "
    id       = { type = 22300 id = 414 }
    division =
    { id       = { type = 22300 id = 714 }
      name     = "山西保安總隊 "
      type     = militia
      strength     = 60
      model    = 9
    }
  }
}
