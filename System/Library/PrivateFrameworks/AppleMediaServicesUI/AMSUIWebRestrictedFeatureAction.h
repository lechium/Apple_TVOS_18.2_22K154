//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebRestrictedFeatureAction
{
    NSString *_identifier;	// 8 = 0x8
    NSNumber *_enabled;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ab3f1
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_unknownIdentifierError;	// IMP=0x00000000000ab388
- (long long)_translateState:(int)arg1;	// IMP=0x00000000000ab1b0
- (id)_featureWithIdentifier:(id)arg1;	// IMP=0x00000000000ab0be
- (id)runAction;	// IMP=0x00000000000aad24
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000aabe0

@end

