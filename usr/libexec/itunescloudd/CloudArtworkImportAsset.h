//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CloudArtworkImportAsset : NSObject
{
    unsigned int _artworkMediaType;	// 8 = 0x8
    NSURL *_assetURL;	// 16 = 0x10
    long long _artworkType;	// 24 = 0x18
    NSString *_artworkToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000112eaa
@property(readonly, nonatomic) NSString *artworkToken; // @synthesize artworkToken=_artworkToken;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
@property(readonly, nonatomic) unsigned int artworkMediaType; // @synthesize artworkMediaType=_artworkMediaType;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (id)initWithAssertURL:(id)arg1 artworkMediaType:(unsigned int)arg2 artworkType:(long long)arg3 artworkToken:(id)arg4;	// IMP=0x0010000000112dd1

@end

