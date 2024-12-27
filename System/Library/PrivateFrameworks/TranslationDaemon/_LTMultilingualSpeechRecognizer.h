//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LTMultilingualSpeechRecognizer : NSObject
{
    NSDictionary *_recognizers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000040a74
- (void)setLanguagesRecognized:(id)arg1;	// IMP=0x00000000000406ed
- (id)loadedRecognizers;	// IMP=0x00000000000406d7
- (void)cancelRecognition;	// IMP=0x00000000000405a4
- (void)endAudio;	// IMP=0x0000000000040444
- (void)addSpeechAudioData:(id)arg1;	// IMP=0x00000000000402e8
- (void)startRecognitionForLocale:(id)arg1 autoEndpoint:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003f59c
- (id)initWithModelURLs:(id)arg1 modelVersions:(id)arg2;	// IMP=0x000000000003f38b

@end

