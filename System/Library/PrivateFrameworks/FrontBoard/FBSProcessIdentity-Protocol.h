//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSProcess-Protocol.h>

@class BSMachPortTaskNameRight, BSProcessHandle, RBSProcessIdentity;

@protocol FBSProcessIdentity <FBSProcess>
@property(readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property(readonly, retain, nonatomic) RBSProcessIdentity *identity;
@property(readonly, retain, nonatomic) BSProcessHandle *handle;
@end

