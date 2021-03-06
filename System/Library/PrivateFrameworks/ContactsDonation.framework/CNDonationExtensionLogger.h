/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNDonationExtensionLogger <NSObject>
@required
-(void)loadedDonorExtension:(id)arg1 forIdentifier:(id)arg2;
-(void)couldNotLoadDonorExtensionForIdentifier:(id)arg1 error:(id)arg2;
-(void)willRenewDonation:(id)arg1;
-(void)didRenewDonation:(id)arg1 untilDate:(id)arg2;
-(void)didExpireDonation:(id)arg1 withError:(id)arg2;
-(void)couldNotRenewDonation:(id)arg1 error:(id)arg2;
-(void)willRedonateValuesWithReason:(unsigned long long)arg1;
-(void)didRedonateValuesWithReason:(unsigned long long)arg1;
-(void)couldNotRedonateValuesWithReason:(unsigned long long)arg1 error:(id)arg2;

@end

