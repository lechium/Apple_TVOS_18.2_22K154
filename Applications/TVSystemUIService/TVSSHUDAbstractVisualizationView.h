//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, TVSSHUDVisualization;

@interface TVSSHUDAbstractVisualizationView : UIView
{
    TVSSHUDVisualization *_visualization;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000005490
@property(retain, nonatomic) TVSSHUDVisualization *visualization; // @synthesize visualization=_visualization;
- (void)visualizationDidChange:(id)arg1;	// IMP=0x0010000000005420
- (void)visualizationDidUpdate;	// IMP=0x0010000000005410

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

