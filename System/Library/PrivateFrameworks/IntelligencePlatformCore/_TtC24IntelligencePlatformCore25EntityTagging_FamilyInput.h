//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <IntelligencePlatformCore/MLFeatureProvider-Protocol.h>

@class MISSING_TYPE, NSSet;

@interface _TtC24IntelligencePlatformCore25EntityTagging_FamilyInput : _TtCs12_SwiftObject <MLFeatureProvider>
{
    MISSING_TYPE *isVIP;	// 16 = 0x10
    MISSING_TYPE *sharesWorkAddress;	// 24 = 0x18
    MISSING_TYPE *hasSamePrivateEmailDomain;	// 32 = 0x20
    MISSING_TYPE *hasBirthday;	// 40 = 0x28
    MISSING_TYPE *hasSameEmailDomains;	// 48 = 0x30
    MISSING_TYPE *sameLastName;	// 56 = 0x38
    MISSING_TYPE *hasSamePublicEmailDomain;	// 64 = 0x40
    MISSING_TYPE *photosPersonAge;	// 72 = 0x48
    MISSING_TYPE *isFavorite;	// 80 = 0x50
    MISSING_TYPE *hasSameEduEmailDomain;	// 88 = 0x58
    MISSING_TYPE *hasSameWorkEmailDomain;	// 96 = 0x60
    MISSING_TYPE *hasNickname;	// 104 = 0x68
    MISSING_TYPE *allowListedNameMatch;	// 112 = 0x70
    MISSING_TYPE *ageDifferenceCategory;	// 120 = 0x78
    MISSING_TYPE *nameContainsEmoji;	// 128 = 0x80
    MISSING_TYPE *nicknameContainsEmoji;	// 136 = 0x88
    MISSING_TYPE *sharesHomeAddress;	// 144 = 0x90
    MISSING_TYPE *allowListedNicknameMatch;	// 152 = 0x98
    MISSING_TYPE *photosAgeDifferenceCategory;	// 160 = 0xa0
    MISSING_TYPE *iCloudFamilyMember;	// 168 = 0xa8
    MISSING_TYPE *personOverallPopularity;	// 176 = 0xb0
    MISSING_TYPE *personLongTermPopularity;	// 184 = 0xb8
    MISSING_TYPE *personPopularityGivenMonday;	// 192 = 0xc0
    MISSING_TYPE *personPopularityGivenTuesday;	// 200 = 0xc8
    MISSING_TYPE *personPopularityGivenWednesday;	// 208 = 0xd0
    MISSING_TYPE *personPopularityGivenThursday;	// 216 = 0xd8
    MISSING_TYPE *personPopularityGivenFriday;	// 224 = 0xe0
    MISSING_TYPE *personPopularityGivenSaturday;	// 232 = 0xe8
    MISSING_TYPE *personPopularityGivenSunday;	// 240 = 0xf0
    MISSING_TYPE *mondayPopularityGivenPerson;	// 248 = 0xf8
    MISSING_TYPE *tuesdayPopularityGivenPerson;	// 256 = 0x100
    MISSING_TYPE *wednesdayPopularityGivenPerson;	// 264 = 0x108
    MISSING_TYPE *thursdayPopularityGivenPerson;	// 272 = 0x110
    MISSING_TYPE *fridayPopularityGivenPerson;	// 280 = 0x118
    MISSING_TYPE *saturdayPopularityGivenPerson;	// 288 = 0x120
    MISSING_TYPE *sundayPopularityGivenPerson;	// 296 = 0x128
    MISSING_TYPE *personPosteriorProbabilityGivenMonday;	// 304 = 0x130
    MISSING_TYPE *personPosteriorProbabilityGivenTuesday;	// 312 = 0x138
    MISSING_TYPE *personPosteriorProbabilityGivenWednesday;	// 320 = 0x140
    MISSING_TYPE *personPosteriorProbabilityGivenThursday;	// 328 = 0x148
    MISSING_TYPE *personPosteriorProbabilityGivenFriday;	// 336 = 0x150
    MISSING_TYPE *personPosteriorProbabilityGivenSaturday;	// 344 = 0x158
    MISSING_TYPE *personPosteriorProbabilityGivenSunday;	// 352 = 0x160
    MISSING_TYPE *personPopularityGivenMorning;	// 360 = 0x168
    MISSING_TYPE *personPopularityGivenAfternoon;	// 368 = 0x170
    MISSING_TYPE *personPopularityGivenEvening;	// 376 = 0x178
    MISSING_TYPE *personPopularityGivenNight;	// 384 = 0x180
    MISSING_TYPE *personPopularityGivenHome;	// 392 = 0x188
    MISSING_TYPE *personPopularityGivenWork;	// 400 = 0x190
    MISSING_TYPE *homePopularityGivenPerson;	// 408 = 0x198
    MISSING_TYPE *workPopularityGivenPerson;	// 416 = 0x1a0
    MISSING_TYPE *personPosteriorProbabilityGivenHome;	// 424 = 0x1a8
    MISSING_TYPE *personPosteriorProbabilityGivenWork;	// 432 = 0x1b0
    MISSING_TYPE *personPopularityGivenWeekday;	// 440 = 0x1b8
    MISSING_TYPE *personPopularityGivenWeekend;	// 448 = 0x1c0
    MISSING_TYPE *weekdayPopularityGivenPerson;	// 456 = 0x1c8
    MISSING_TYPE *weekendPopularityGivenPerson;	// 464 = 0x1d0
    MISSING_TYPE *top1PersonInteractionMechanism;	// 472 = 0x1d8
    MISSING_TYPE *top2PersonInteractionMechanism;	// 480 = 0x1e0
    MISSING_TYPE *top3PersonInteractionMechanism;	// 488 = 0x1e8
    MISSING_TYPE *photosPersonOverallPopularity;	// 496 = 0x1f0
    MISSING_TYPE *photosPersonLongTermPopularity;	// 504 = 0x1f8
    MISSING_TYPE *photosPersonPopularityGivenMonday;	// 512 = 0x200
    MISSING_TYPE *mondayPopularityGivenPhotosPerson;	// 520 = 0x208
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenMonday;	// 528 = 0x210
    MISSING_TYPE *photosPersonPopularityGivenTuesday;	// 536 = 0x218
    MISSING_TYPE *tuesdayPopularityGivenPhotosPerson;	// 544 = 0x220
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenTuesday;	// 552 = 0x228
    MISSING_TYPE *photosPersonPopularityGivenWednesday;	// 560 = 0x230
    MISSING_TYPE *wednesdayPopularityGivenPhotosPerson;	// 568 = 0x238
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWednesday;	// 576 = 0x240
    MISSING_TYPE *photosPersonPopularityGivenThursday;	// 584 = 0x248
    MISSING_TYPE *thursdayPopularityGivenPhotosPerson;	// 592 = 0x250
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenThursday;	// 600 = 0x258
    MISSING_TYPE *photosPersonPopularityGivenFriday;	// 608 = 0x260
    MISSING_TYPE *fridayPopularityGivenPhotosPerson;	// 616 = 0x268
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenFriday;	// 624 = 0x270
    MISSING_TYPE *photosPersonPopularityGivenSaturday;	// 632 = 0x278
    MISSING_TYPE *saturdayPopularityGivenPhotosPerson;	// 640 = 0x280
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSaturday;	// 648 = 0x288
    MISSING_TYPE *photosPersonPopularityGivenSunday;	// 656 = 0x290
    MISSING_TYPE *sundayPopularityGivenPhotosPerson;	// 664 = 0x298
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSunday;	// 672 = 0x2a0
    MISSING_TYPE *photosPersonPopularityGivenMorning;	// 680 = 0x2a8
    MISSING_TYPE *morningPopularityGivenPhotosPerson;	// 688 = 0x2b0
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenMorning;	// 696 = 0x2b8
    MISSING_TYPE *photosPersonPopularityGivenAfternoon;	// 704 = 0x2c0
    MISSING_TYPE *afternoonPopularityGivenPhotosPerson;	// 712 = 0x2c8
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenAfternoon;	// 720 = 0x2d0
    MISSING_TYPE *photosPersonPopularityGivenEvening;	// 728 = 0x2d8
    MISSING_TYPE *eveningPopularityGivenPhotosPerson;	// 736 = 0x2e0
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenEvening;	// 744 = 0x2e8
    MISSING_TYPE *photosPersonPopularityGivenNight;	// 752 = 0x2f0
    MISSING_TYPE *nightPopularityGivenPhotosPerson;	// 760 = 0x2f8
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenNight;	// 768 = 0x300
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenMondayMorning;	// 776 = 0x308
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenMondayAfternoon;	// 784 = 0x310
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenMondayEvening;	// 792 = 0x318
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenMondayNight;	// 800 = 0x320
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenTuesdayMorning;	// 808 = 0x328
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenTuesdayAfternoon;	// 816 = 0x330
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenTuesdayEvening;	// 824 = 0x338
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenTuesdayNight;	// 832 = 0x340
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWednesdayMorning;	// 840 = 0x348
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWednesdayAfternoon;	// 848 = 0x350
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWednesdayEvening;	// 856 = 0x358
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWednesdayNight;	// 864 = 0x360
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenThursdayMorning;	// 872 = 0x368
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenThursdayAfternoon;	// 880 = 0x370
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenThursdayEvening;	// 888 = 0x378
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenThursdayNight;	// 896 = 0x380
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenFridayMorning;	// 904 = 0x388
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenFridayAfternoon;	// 912 = 0x390
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenFridayEvening;	// 920 = 0x398
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenFridayNight;	// 928 = 0x3a0
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSaturdayMorning;	// 936 = 0x3a8
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSaturdayAfternoon;	// 944 = 0x3b0
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSaturdayEvening;	// 952 = 0x3b8
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSaturdayNight;	// 960 = 0x3c0
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSundayMorning;	// 968 = 0x3c8
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSundayAfternoon;	// 976 = 0x3d0
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSundayEvening;	// 984 = 0x3d8
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenSundayNight;	// 992 = 0x3e0
    MISSING_TYPE *photosPersonPopularityGivenHome;	// 1000 = 0x3e8
    MISSING_TYPE *homePopularityGivenPhotosPerson;	// 1008 = 0x3f0
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenHome;	// 1016 = 0x3f8
    MISSING_TYPE *photosPersonPopularityGivenWork;	// 1024 = 0x400
    MISSING_TYPE *workPopularityGivenPhotosPerson;	// 1032 = 0x408
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWork;	// 1040 = 0x410
    MISSING_TYPE *photosPersonPopularityGivenWeekday;	// 1048 = 0x418
    MISSING_TYPE *weekdayPopularityGivenPhotosPerson;	// 1056 = 0x420
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekday;	// 1064 = 0x428
    MISSING_TYPE *photosPersonPopularityGivenWeekend;	// 1072 = 0x430
    MISSING_TYPE *weekendPopularityGivenPhotosPerson;	// 1080 = 0x438
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekend;	// 1088 = 0x440
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekdayMorning;	// 1096 = 0x448
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekdayAfternoon;	// 1104 = 0x450
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekdayEvening;	// 1112 = 0x458
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekdayNight;	// 1120 = 0x460
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekendMorning;	// 1128 = 0x468
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekendAfternoon;	// 1136 = 0x470
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekendEvening;	// 1144 = 0x478
    MISSING_TYPE *photosPersonPosteriorProbabilityGivenWeekendNight;	// 1152 = 0x480
    MISSING_TYPE *hasWeekendWeekdayPhotosFeatures;	// 1160 = 0x488
}

- (id)featureValueForName:(id)arg1;	// IMP=0x000000000053d947
@property(nonatomic, readonly) NSSet *featureNames;

@end

