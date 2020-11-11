/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLPTPAssetReader : NSObject {

	NSString* _path;
	id _userInfo;
	BOOL _shouldDeleteTemporaryFileOnDeallocation;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
-(id)initWithPath:(id)arg1 ;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)description;
-(id)initWithTemporaryFileDeletedOnDeallocPath:(id)arg1 ;
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
-(NSString *)path;
-(void)dealloc;
@end
