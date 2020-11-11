/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareUnshareOperation : BROperation {

	CKShare* _share;
	/*^block*/id _unshareCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;              //@synthesize share=_share - In the implementation block
@property (copy) id unshareCompletionBlock;                //@synthesize unshareCompletionBlock=_unshareCompletionBlock - In the implementation block
-(CKShare *)share;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)main;
-(void)setShare:(CKShare *)arg1 ;
-(id)initWithShare:(id)arg1 ;
-(id)unshareCompletionBlock;
-(void)setUnshareCompletionBlock:(id)arg1 ;
@end
