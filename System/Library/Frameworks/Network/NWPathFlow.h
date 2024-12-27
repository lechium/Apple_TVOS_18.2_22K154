//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, NWEndpoint, NWInterface;
@protocol OS_nw_path_flow;

__attribute__((visibility("hidden")))
@interface NWPathFlow : NSObject
{
    NSObject<OS_nw_path_flow> *_internalPathFlow;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007cb180
@property(readonly) NSObject<OS_nw_path_flow> *internalPathFlow; // @synthesize internalPathFlow=_internalPathFlow;
- (id)privateDescription;	// IMP=0x00000000007cb130
- (id)description;	// IMP=0x00000000007cb110
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;	// IMP=0x00000000007cad30
@property(readonly, nonatomic) _Bool supportsIPv6;
@property(readonly, nonatomic) _Bool supportsIPv4;
@property(readonly, nonatomic, getter=isDefunct) _Bool defunct;
@property(readonly, nonatomic, getter=isDirect) _Bool direct;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
@property(readonly, nonatomic, getter=isAssigned) _Bool assigned;
@property(readonly, nonatomic, getter=isViable) _Bool viable;
@property(readonly, nonatomic) unsigned int nexusPort;
@property(readonly, nonatomic) NSUUID *nexusInstance;
@property(readonly, nonatomic) NSUUID *nexusAgent;
@property(readonly, nonatomic) NSUUID *flowID;
@property(readonly, nonatomic) NWEndpoint *remoteEndpoint;
@property(readonly, nonatomic) NWEndpoint *localEndpoint;
@property(readonly, nonatomic) NWInterface *interface;
- (id)initWithPathFlow:(id)arg1;	// IMP=0x00000000007ca360

@end

