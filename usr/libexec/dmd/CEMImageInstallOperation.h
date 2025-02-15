//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class CEMAssetBaseReference, CEMImageDeclaration, NSString;
@protocol DMDRemoteAssetResolver;

@interface CEMImageInstallOperation : CATOperation
{
    CEMImageDeclaration *_imageDeclaration;	// 8 = 0x8
    id <DMDRemoteAssetResolver> _resolver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000060c2
@property(retain, nonatomic) id <DMDRemoteAssetResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) CEMImageDeclaration *imageDeclaration; // @synthesize imageDeclaration=_imageDeclaration;
- (void)assetResolutionFailedWithError:(id)arg1;	// IMP=0x001000000000602e
- (void)assetResolutionDidSucceedWithAssetURL:(id)arg1;	// IMP=0x0010000000005d25
@property(readonly, copy, nonatomic) CEMAssetBaseReference *assetReference;
- (id)assetDescriptor;	// IMP=0x0010000000005c85
@property(readonly, copy, nonatomic) NSString *assetIdentifier;
- (void)main;	// IMP=0x0010000000005b64
- (_Bool)isAsynchronous;	// IMP=0x0010000000005b5c
- (id)initWithImageDeclaration:(id)arg1 resolver:(id)arg2;	// IMP=0x0010000000005aba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

