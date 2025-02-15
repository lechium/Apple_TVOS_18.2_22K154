//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSpeechRequestOptions, NSUUID;

@interface ADRemoteSpeechRequestHelper : NSObject
{
    NSUUID *_currentToken;	// 8 = 0x8
    AFSpeechRequestOptions *_speechRequestOptions;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000018f617
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(readonly, copy, nonatomic) NSUUID *currentToken; // @synthesize currentToken=_currentToken;
- (void)reset;	// IMP=0x001000000018f5b5
- (id)setSpeechRequestOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f4f8

@end

