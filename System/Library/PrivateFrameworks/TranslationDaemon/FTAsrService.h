//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Osprey/OspreyChannel.h>

__attribute__((visibility("hidden")))
@interface FTAsrService : OspreyChannel
{
}

- (void)performGraphemeToPhoneme:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019a386
- (void)performCorrectionsValidator:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019a141
- (void)performKeywordFinder:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000199efc
- (void)performPostItnHammer:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000199cb7
- (void)performTextNormalization:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000199a72
- (void)performItn:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019982d
- (void)performErrorBlamer:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001995e8
- (id)performRecognitionWithDelegate:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000199347

@end

