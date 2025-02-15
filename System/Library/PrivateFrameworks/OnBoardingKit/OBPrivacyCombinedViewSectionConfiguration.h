//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface OBPrivacyCombinedViewSectionConfiguration : NSObject
{
    NSArray *_actions;	// 8 = 0x8
    NSString *_headerText;	// 16 = 0x10
    NSString *_footerText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a3c8
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a306
- (id)initWithActions:(id)arg1;	// IMP=0x000000000001a293

@end

