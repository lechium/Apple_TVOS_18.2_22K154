//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebSpeechRecognizerTask : NSObject
{
    struct RetainPtr<WebSpeechRecognizerTaskImpl> _impl;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000390f00
- (void).cxx_destruct;	// IMP=0x0000000000390ee0
- (void)stop;	// IMP=0x0000000000390ec0
- (void)abort;	// IMP=0x0000000000390ea0
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000000390e80
- (id)initWithIdentifier:(ObjectIdentifierGeneric_c51cb688)arg1 locale:(id)arg2 doMultipleRecognitions:(_Bool)arg3 reportInterimResults:(_Bool)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(CDUnknownBlockType)arg6;	// IMP=0x0000000000390dd0

@end

