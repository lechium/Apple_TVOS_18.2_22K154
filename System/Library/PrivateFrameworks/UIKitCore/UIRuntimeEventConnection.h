//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection
{
    unsigned long long eventMask;	// 8 = 0x8
}

@property unsigned long long eventMask; // @synthesize eventMask;
- (id)description;	// IMP=0x0000000000ba2fa8
- (void)connectForSimulator;	// IMP=0x0000000000ba2f3b
- (void)connect;	// IMP=0x0000000000ba2eef
@property(readonly) SEL action;
@property(readonly) id target;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ba2dd8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ba2d5e

@end

