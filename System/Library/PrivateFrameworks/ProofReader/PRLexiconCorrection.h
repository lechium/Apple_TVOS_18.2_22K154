//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRLexiconCorrection : NSObject
{
    unsigned int _tokenID;	// 8 = 0x8
    double _score;	// 16 = 0x10
    unsigned long long _errorType;	// 24 = 0x18
}

@property(readonly) unsigned long long errorType; // @synthesize errorType=_errorType;
@property(readonly) double score; // @synthesize score=_score;
@property(readonly) unsigned int tokenID; // @synthesize tokenID=_tokenID;
- (id)description;	// IMP=0x0000000000062e8b
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2 errorType:(unsigned long long)arg3;	// IMP=0x0000000000062e34

@end

