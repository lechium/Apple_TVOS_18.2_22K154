//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisEventBulletinNotificationRegistration
{
    unsigned long long _audioAnalysisClassifierOptions;	// 8 = 0x8
    NSUUID *_accessoryUUID;	// 16 = 0x10
}

+ (id)type;	// IMP=0x001000000060d17e
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000060d176
- (void).cxx_destruct;	// IMP=0x000000000060d0dc
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly) unsigned long long audioAnalysisClassifierOptions; // @synthesize audioAnalysisClassifierOptions=_audioAnalysisClassifierOptions;
- (id)attributeDescriptions;	// IMP=0x000000000060cf1d
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000060cd95
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x000000000060cc7e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000060cb24
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000060ca39
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000060c8c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000060c8b6
- (id)initWithPredicate:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x000000000060c7e3
- (id)initWithLocalBulletinAudioAnalysisRegistration:(id)arg1;	// IMP=0x000000000060c6d0
- (id)initWithConditions:(id)arg1 audioAnalysisClassifierOptions:(unsigned long long)arg2 accessoryUUID:(id)arg3;	// IMP=0x000000000060c646
- (id)predicate;	// IMP=0x000000000060c4fb

@end

