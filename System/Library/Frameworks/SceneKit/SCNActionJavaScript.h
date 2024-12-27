//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNActionJavaScript : SCNAction
{
    NSString *_script;	// 8 = 0x8
}

+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;	// IMP=0x0060000000139eeb
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000139e14
- (id)parameters;	// IMP=0x000000000013a18b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013a131
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013a030
- (id)reversedAction;	// IMP=0x000000000013a016
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000139f94
- (_Bool)isCustom;	// IMP=0x0000000000139f8c
- (void)dealloc;	// IMP=0x0000000000139f4a
- (id)initWithString:(id)arg1;	// IMP=0x0000000000139e1c

@end

