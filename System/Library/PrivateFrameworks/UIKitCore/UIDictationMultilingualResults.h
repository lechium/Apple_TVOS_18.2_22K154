//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIDictationMultilingualResults : NSObject
{
    NSArray *_phrases;	// 8 = 0x8
    NSString *_dominantLanguage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d9d38a
@property(copy, nonatomic) NSString *dominantLanguage; // @synthesize dominantLanguage=_dominantLanguage;
@property(copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d9d2ca
- (unsigned long long)hash;	// IMP=0x0000000000d9d23e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d9d141
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d9d0d4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d9cfa3
- (id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2;	// IMP=0x0000000000d9ceea

@end

