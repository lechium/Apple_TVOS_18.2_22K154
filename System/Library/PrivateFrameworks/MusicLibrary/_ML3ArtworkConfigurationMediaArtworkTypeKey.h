//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _ML3ArtworkConfigurationMediaArtworkTypeKey : NSObject
{
    unsigned int _mediaType;	// 8 = 0x8
    long long _artworkType;	// 16 = 0x10
}

+ (id)keyWithMediaType:(unsigned int)arg1 artworkType:(long long)arg2;	// IMP=0x001000000010d5f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010d5e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010d59f
- (unsigned long long)hash;	// IMP=0x000000000010d592

@end

