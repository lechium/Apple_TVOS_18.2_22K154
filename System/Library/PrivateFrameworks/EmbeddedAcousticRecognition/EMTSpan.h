//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface EMTSpan : NSObject
{
    _Bool _doNotTranslate;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    struct _NSRange _range;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008b93b
@property(readonly, nonatomic) _Bool doNotTranslate; // @synthesize doNotTranslate=_doNotTranslate;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008b90f
- (id)initWithIdentifier:(id)arg1 range:(struct _NSRange)arg2 doNotTranslate:(_Bool)arg3;	// IMP=0x000000000008b870

@end

