//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUITTRReportComponent : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
}

+ (id)peopleSuggesterComponent;	// IMP=0x006000000002f640
- (void).cxx_destruct;	// IMP=0x000000000002f7b5
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3;	// IMP=0x000000000002f67e

@end

