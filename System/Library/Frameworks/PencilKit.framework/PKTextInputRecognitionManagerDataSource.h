/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKTextInputRecognitionManagerDataSource <NSObject>
@required
-(id)recognitionManagerStrokeProvider:(id)arg1;
-(id)recognitionManagerTextInputTargets:(id)arg1;
-(id)recognitionManager:(id)arg1 textInputTargetForItemStableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 simultaneousItemStableIdentifiers:(id)arg4;
-(void)recognitionManager:(id)arg1 fetchContentInfoForTextInputTarget:(id)arg2 strokeIdentifiers:(id)arg3 completion:(/*^block*/id)arg4;
-(void)recognitionManager:(id)arg1 recognitionDidFinishWithQueryItems:(id)arg2 duration:(double)arg3;

@end

