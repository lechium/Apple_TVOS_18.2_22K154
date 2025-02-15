//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface AMSPhoneNumberContextInfo : NSObject
{
    _Bool _isVoicePreferred;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_simLabel;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000482044
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSString *simLabel; // @synthesize simLabel=_simLabel;
@property(readonly) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly) _Bool isVoicePreferred; // @synthesize isVoicePreferred=_isVoicePreferred;
- (id)description;	// IMP=0x0000000000481e97
- (id)initWithPhoneNumber:(id)arg1 simLabel:(id)arg2 uuid:(id)arg3 isVoicePreferred:(_Bool)arg4;	// IMP=0x0000000000481dd4

@end

