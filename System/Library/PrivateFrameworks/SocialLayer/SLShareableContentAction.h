//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLShareableContentAction : NSObject
{
    NSString *_sceneIdentifier;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000026304
+ (id)actionWithData:(id)arg1 targetingSceneIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000025f22
- (void).cxx_destruct;	// IMP=0x000000000002645c
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000263af
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002630c
- (void)fail;	// IMP=0x00000000000262f0
- (void)failWithError:(id)arg1;	// IMP=0x0000000000026218
- (void)fulfillWithResponse:(id)arg1;	// IMP=0x0000000000026196
- (id)description;	// IMP=0x00000000000260c8
- (id)initWithSceneIdentifier:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002600f

@end

