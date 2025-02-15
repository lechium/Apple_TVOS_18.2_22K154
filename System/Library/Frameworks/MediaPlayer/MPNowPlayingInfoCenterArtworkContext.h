//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItemArtwork, NSData, NSString;

__attribute__((visibility("hidden")))
@interface MPNowPlayingInfoCenterArtworkContext : NSObject
{
    NSString *_artworkIdentifier;	// 8 = 0x8
    MPMediaItemArtwork *_artwork;	// 16 = 0x10
    NSData *_artworkData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c7231
@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;

@end

