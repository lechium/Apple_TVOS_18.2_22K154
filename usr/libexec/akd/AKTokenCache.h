//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AKTokenCache : NSObject
{
    NSMutableDictionary *_tokenCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c346a
@property(retain, nonatomic) NSMutableDictionary *tokenCache; // @synthesize tokenCache=_tokenCache;
- (void)clearAllTokensForAltDSID:(id)arg1;	// IMP=0x00100000000c3434
- (void)deleteWithContext:(id)arg1;	// IMP=0x00100000000c3325
- (void)updateWithContext:(id)arg1;	// IMP=0x00100000000c3184
- (id)fetchWithContext:(id)arg1;	// IMP=0x00100000000c30a5
- (id)init;	// IMP=0x00100000000c303f

@end

