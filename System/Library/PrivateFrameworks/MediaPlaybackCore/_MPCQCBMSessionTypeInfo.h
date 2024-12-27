//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackAccount, NSString;

__attribute__((visibility("hidden")))
@interface _MPCQCBMSessionTypeInfo : NSObject
{
    _Bool _supported;	// 8 = 0x8
    _Bool _exportable;	// 9 = 0x9
    NSString *_identifier;	// 16 = 0x10
    MPCPlaybackAccount *_account;	// 24 = 0x18
    NSString *_supportedReason;	// 32 = 0x20
    NSString *_exportableReason;	// 40 = 0x28
}

+ (id)infoWithIdentifier:(id)arg1 account:(id)arg2 supported:(_Bool)arg3 supportedReason:(id)arg4 exportable:(_Bool)arg5 exportableReason:(id)arg6;	// IMP=0x00600000001d8799
- (void).cxx_destruct;	// IMP=0x00000000001d875b
@property(copy, nonatomic) NSString *exportableReason; // @synthesize exportableReason=_exportableReason;
@property(nonatomic) _Bool exportable; // @synthesize exportable=_exportable;
@property(copy, nonatomic) NSString *supportedReason; // @synthesize supportedReason=_supportedReason;
@property(nonatomic) _Bool supported; // @synthesize supported=_supported;
@property(copy, nonatomic) MPCPlaybackAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

