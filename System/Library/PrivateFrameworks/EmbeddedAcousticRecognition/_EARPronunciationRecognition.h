//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARPronunciationRecognition : NSObject
{
    struct unique_ptr<quasar::SystemConfig, std::default_delete<quasar::SystemConfig>> _sysConfig;	// 8 = 0x8
    struct unique_ptr<quasar::ptt::PronunciationRecognizer, std::default_delete<quasar::ptt::PronunciationRecognizer>> _recognizer;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000069a3ce
- (void).cxx_destruct;	// IMP=0x000000000069a396
- (void)transcribeMultipleFromJsonResultsPath:(id)arg1;	// IMP=0x0000000000699cab
- (id)transcribePronunciation:(id)arg1;	// IMP=0x0000000000699b00
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000006998d2

@end

