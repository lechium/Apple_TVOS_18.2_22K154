//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (ISAdditions)
- (long long)itunes_maxExpectedContentLength;	// IMP=0x0060000000053943
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;	// IMP=0x006000000005386f
- (double)itunes_expirationInterval;	// IMP=0x0060000000053807
- (double)expirationInterval;	// IMP=0x0060000000053752
- (id)itunes_expirationDate;	// IMP=0x006000000005371e
- (id)_dateFromExpires;	// IMP=0x00600000000536e5
- (_Bool)_getCacheControlMaxAge:(double *)arg1;	// IMP=0x0060000000053551
@end

