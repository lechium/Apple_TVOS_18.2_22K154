//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, SHSignature;

__attribute__((visibility("hidden")))
@interface SHMREMatch : NSObject
{
    unsigned long long _trackID;	// 8 = 0x8
    double _offset;	// 16 = 0x10
    NSNumber *_timeSkew;	// 24 = 0x18
    NSNumber *_freqSkew;	// 32 = 0x20
    NSNumber *_score;	// 40 = 0x28
    NSArray *_mediaItems;	// 48 = 0x30
    NSArray *_signatureAlignments;	// 56 = 0x38
    SHSignature *_querySignature;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000019ec6
@property(readonly, nonatomic) SHSignature *querySignature; // @synthesize querySignature=_querySignature;
@property(readonly, nonatomic) NSArray *signatureAlignments; // @synthesize signatureAlignments=_signatureAlignments;
@property(readonly, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(readonly, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, nonatomic) NSNumber *freqSkew; // @synthesize freqSkew=_freqSkew;
@property(readonly, nonatomic) NSNumber *timeSkew; // @synthesize timeSkew=_timeSkew;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long trackID; // @synthesize trackID=_trackID;
- (id)toMatchedMediaItems;	// IMP=0x000000000001990b
- (id)initWithTrackID:(unsigned long long)arg1 matchOffset:(double)arg2 timeSkew:(id)arg3 frequencySkew:(id)arg4 score:(id)arg5 mediaItems:(id)arg6 querySignature:(id)arg7 signatureAlignments:(id)arg8;	// IMP=0x00000000000197cf
- (id)initWithResult:(id)arg1 mediaItems:(id)arg2 signatureAlignments:(id)arg3 querySignature:(id)arg4;	// IMP=0x0000000000019680

@end

