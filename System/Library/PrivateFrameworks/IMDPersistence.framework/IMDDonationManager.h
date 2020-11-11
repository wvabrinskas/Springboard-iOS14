/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSFileManager;

@interface IMDDonationManager : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)dealloc;
-(void)copyGroupPhotoToExternalPathIfNecessary:(id)arg1 chatGUID:(id)arg2 attachmentFilepath:(id)arg3 ;
@end
