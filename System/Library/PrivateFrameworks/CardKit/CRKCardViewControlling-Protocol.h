//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardKit/CRCommandHandling-Protocol.h>
#import <CardKit/CRKEventResponding-Protocol.h>
#import <CardKit/CRKFeedbackDelegate-Protocol.h>

@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@protocol CRKCardViewControlling <CRKEventResponding, CRKFeedbackDelegate, CRCommandHandling>
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property(retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource;
@property(retain, nonatomic) id <CRCard> card;
- (double)contentHeightForWidth:(double)arg1;
@end

