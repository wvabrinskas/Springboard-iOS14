/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariShared/SafariShared-Structs.h>
@class NSArray;

@interface WBSTabDialogInformation : NSObject {

	/*^block*/id _dismissalBlock;
	BOOL _isInvokingPresentationBlock;
	/*^block*/id _presentationBlock;
	BOOL _blockingWebProcess;
	BOOL _dismissed;
	BOOL _presented;
	NSArray* _cancellationExemptions;
	SCD_Struct_WB114 _slot;

}

@property (assign,nonatomic) SCD_Struct_WB114 slot;                                              //@synthesize slot=_slot - In the implementation block
@property (nonatomic,copy) NSArray * cancellationExemptions;                                     //@synthesize cancellationExemptions=_cancellationExemptions - In the implementation block
@property (getter=isBlockingWebProcess,nonatomic,readonly) BOOL blockingWebProcess;              //@synthesize blockingWebProcess=_blockingWebProcess - In the implementation block
@property (getter=isDismissed,nonatomic,readonly) BOOL dismissed;                                //@synthesize dismissed=_dismissed - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented;                                //@synthesize presented=_presented - In the implementation block
-(BOOL)isPresented;
-(id)description;
-(void)setSlot:(SCD_Struct_WB114)arg1 ;
-(void)presentIfNeeded;
-(void)dismissWithResponse:(id)arg1 ;
-(BOOL)isBlockingWebProcess;
-(SCD_Struct_WB114)slot;
-(BOOL)isExemptFromCancellationInContext:(id)arg1 ;
-(id)initWithPresentationBlock:(/*^block*/id)arg1 dismissalBlock:(/*^block*/id)arg2 blocksWebProcessUntilDismissed:(BOOL)arg3 ;
-(BOOL)isDismissed;
-(void)setCancellationExemptions:(NSArray *)arg1 ;
-(NSArray *)cancellationExemptions;
@end
