//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEPolicySession, NSMutableSet, NSUUID, _TtC16DaemoniOSLibrary24SDAirDropEndpointService;
@protocol OS_dispatch_queue, OS_nw_agent;

@interface SDAirDropAgent : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_nw_agent> *_browseAgent;	// 24 = 0x18
    struct NEVirtualInterface_s *_interface;	// 32 = 0x20
    NEPolicySession *_policySession;	// 40 = 0x28
    _TtC16DaemoniOSLibrary24SDAirDropEndpointService *_endpointService;	// 48 = 0x30
    NSMutableSet *_clientTokens;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000011a0d1
@property(retain, nonatomic) NSMutableSet *clientTokens; // @synthesize clientTokens=_clientTokens;
@property(retain, nonatomic) _TtC16DaemoniOSLibrary24SDAirDropEndpointService *endpointService; // @synthesize endpointService=_endpointService;
@property(retain, nonatomic) NEPolicySession *policySession; // @synthesize policySession=_policySession;
@property(nonatomic) struct NEVirtualInterface_s *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) NSObject<OS_nw_agent> *browseAgent; // @synthesize browseAgent=_browseAgent;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)handleEndpointsChanged:(id)arg1;	// IMP=0x0010000000119ab1
- (id)_agentClientTokenForClient:(id)arg1;	// IMP=0x00100000001198c0
- (void)_setupAssertHandlers;	// IMP=0x00100000001198ba
- (void)_setupFlowHandlers;	// IMP=0x00100000001198b4
- (void)_setupBrowseHandlers;	// IMP=0x001000000011933e
- (void)_createBrowseAgent;	// IMP=0x0010000000119059
- (void)_setupPolicy;	// IMP=0x0010000000118bc5
- (id)initWithEndpointService:(id)arg1;	// IMP=0x00100000001189be

@end

