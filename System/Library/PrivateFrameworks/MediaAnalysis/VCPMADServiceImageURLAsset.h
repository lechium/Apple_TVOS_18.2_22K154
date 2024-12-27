//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, NSURL;

@interface VCPMADServiceImageURLAsset
{
    NSURL *_url;	// 8 = 0x8
    struct CF<__CVBuffer *> _pixelBuffer;	// 16 = 0x10
    unsigned int _orientation;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSArray *_documentObservations;	// 40 = 0x28
    _Bool _hasCachedParseData;	// 48 = 0x30
    NSData *_cachedParseData;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000001eb1ce
- (void).cxx_destruct;	// IMP=0x00000000001eb16c
- (void)setCachedParseData:(id)arg1 overwriteExisting:(_Bool)arg2;	// IMP=0x00000000001eb0f8
- (id)cachedParseData;	// IMP=0x00000000001eb027
- (_Bool)hasCachedParseData;	// IMP=0x00000000001eb017
- (void)setDocumentObservations:(id)arg1;	// IMP=0x00000000001eafb8
- (id)documentObservations;	// IMP=0x00000000001eaee9
- (int)loadPixelBuffer:(struct __CVBuffer **)arg1 orientation:(unsigned int *)arg2;	// IMP=0x00000000001eac59
- (_Bool)isHighResDecoded;	// IMP=0x00000000001eac44
- (unsigned int)orientation;	// IMP=0x00000000001eac34
- (struct CGSize)resolution;	// IMP=0x00000000001ea7dd
- (id)identifier;	// IMP=0x00000000001ea7c8
- (unsigned long long)assetType;	// IMP=0x00000000001ea7bd
- (id)initWithURL:(id)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4;	// IMP=0x00000000001ea6d9

@end

