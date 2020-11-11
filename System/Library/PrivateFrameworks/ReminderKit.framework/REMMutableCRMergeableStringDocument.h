/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REMReplicaIDHelperOwner.h>

@protocol REMReplicaManagerProviding;
@class REMReplicaIDSource, TTMergeableStringVersionedDocument, REMReplicaIDHelper, TTMergeableAttributedString, NSString;

@interface REMMutableCRMergeableStringDocument : NSObject <REMReplicaIDHelperOwner> {

	id<REMReplicaManagerProviding> _replicaManagerProvider;
	REMReplicaIDSource* _replicaIDSource;
	TTMergeableStringVersionedDocument* _document;
	REMReplicaIDHelper* _replicaIDHelper;

}

@property (nonatomic,retain) REMReplicaIDSource * replicaIDSource;                               //@synthesize replicaIDSource=_replicaIDSource - In the implementation block
@property (nonatomic,retain) TTMergeableStringVersionedDocument * document;                      //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) REMReplicaIDHelper * replicaIDHelper;                               //@synthesize replicaIDHelper=_replicaIDHelper - In the implementation block
@property (nonatomic,retain) id<REMReplicaManagerProviding> replicaManagerProvider;              //@synthesize replicaManagerProvider=_replicaManagerProvider - In the implementation block
@property (nonatomic,readonly) TTMergeableAttributedString * mergeableString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(id)arg2 ;
-(void)setReplicaManagerProvider:(id<REMReplicaManagerProviding>)arg1 ;
-(id)immutableDocument;
-(void)_test_insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(TTMergeableStringVersionedDocument *)document;
-(id)initWithReplicaIDSource:(id)arg1 ;
-(id)wipeAndReplaceWithString:(id)arg1 ;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(REMReplicaIDHelper *)replicaIDHelper;
-(void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1 ;
-(void)setReplicaIDHelper:(REMReplicaIDHelper *)arg1 ;
-(REMReplicaIDSource *)replicaIDSource;
-(TTMergeableAttributedString *)mergeableString;
-(id<REMReplicaManagerProviding>)replicaManagerProvider;
-(void)setDocument:(TTMergeableStringVersionedDocument *)arg1 ;
@end
