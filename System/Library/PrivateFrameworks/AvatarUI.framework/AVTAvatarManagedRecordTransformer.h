/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTAvatarManagedRecordTransformer.h>

@protocol AVTAvatarManagedRecordTransformer
@required
-(id)identifierForManagedRecordIdentifier:(id)arg1;
-(id)recordWithManagedRecord:(id)arg1 error:(id*)arg2;
-(id)managedRecordIdentifierForIdentifier:(id)arg1;
-(void)updateManagedRecord:(id)arg1 withRecord:(id)arg2;

@end


@interface AVTAvatarManagedRecordTransformer : NSObject <AVTAvatarManagedRecordTransformer>
-(id)identifierForManagedRecordIdentifier:(id)arg1 ;
-(id)recordWithManagedRecord:(id)arg1 error:(id*)arg2 ;
-(id)managedRecordIdentifierForIdentifier:(id)arg1 ;
-(void)updateManagedRecord:(id)arg1 withRecord:(id)arg2 ;
@end
