//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPayLaterViewControllerDelegate-Protocol.h>

@class PKPayLaterFinancingOption, PKPayLaterPreliminaryAssessment, PKPayLaterProductOptionsSectionController;

@protocol PKPayLaterProductOptionsSectionControllerDelegate <PKPayLaterViewControllerDelegate>
- (void)reloadAllSectionsAnimated:(_Bool)arg1;
- (void)productOptionsSectionController:(PKPayLaterProductOptionsSectionController *)arg1 didSelectPreliminaryAssessment:(PKPayLaterPreliminaryAssessment *)arg2;
- (void)productOptionsSectionController:(PKPayLaterProductOptionsSectionController *)arg1 didSelectFinancingOption:(PKPayLaterFinancingOption *)arg2;
@end

