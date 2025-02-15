//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMFRegisterConfigurationSourceRequest, NSString;
@protocol DMDEngineRegisterConfigurationSourceOperationDelegate;

@interface DMDEngineRegisterConfigurationSourceOperation
{
    id <DMDEngineRegisterConfigurationSourceOperationDelegate> _delegate;	// 8 = 0x8
    DMFRegisterConfigurationSourceRequest *_request;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000480e3
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) DMFRegisterConfigurationSourceRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <DMDEngineRegisterConfigurationSourceOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delegateUpdatedDeclarationSourceAndEndOperation:(id)arg1;	// IMP=0x0010000000047f3e
- (void)main;	// IMP=0x00100000000476be

@end

