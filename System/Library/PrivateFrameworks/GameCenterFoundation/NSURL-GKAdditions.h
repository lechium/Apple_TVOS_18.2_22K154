//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (GKAdditions)
+ (id)_gkGenerateFriendRequestURL:(id)arg1;	// IMP=0x0020000000077830
- (id)_gkURLByReplacingSchemeWithScheme:(id)arg1;	// IMP=0x00100000000243d4
- (id)_gkURLByAddingQueryParameters:(id)arg1;	// IMP=0x00100000000240f9
- (_Bool)_gkIsSecure;	// IMP=0x00100000000240ab
- (_Bool)_gkIsValidServerURL;	// IMP=0x0010000000023fe1
@property(readonly, nonatomic) NSString *gkFileSystemRepresentation;
- (id)cacheKeyRepresentation;	// IMP=0x00100000000d1a81
@end

