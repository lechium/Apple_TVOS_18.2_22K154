//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class WFAddButtonParameterStateUpdate, WFParameter;

@protocol WFAddButtonParameterDelegate <NSObject>
- (WFAddButtonParameterStateUpdate *)parameterStateUpdateForPlusButtonForParameter:(WFParameter *)arg1;
- (_Bool)showsAddButtonForParameter:(WFParameter *)arg1;
@end

