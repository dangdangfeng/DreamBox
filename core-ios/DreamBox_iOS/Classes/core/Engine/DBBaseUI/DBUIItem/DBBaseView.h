//
//  DBBaseView.h
//  DreamBox_iOS
//
//  Created by zhangchu on 2020/8/6.
//

#import "DBViewProtocol.h"
#import "DBViewModel.h"
#import "Masonry.h"

@interface DBBaseView : UIView <DBViewProtocol>

@property (nonatomic, strong) UIView *contentV;
@property (nonatomic, copy) NSString *pathId;
@property (nonatomic, copy) NSString *accessKey;
@property (nonatomic, copy) NSString *tid;
@property (nonatomic ,copy) NSString *indentifier;//string
@property (nonatomic ,copy) NSString *modelID;//string

@property (nonatomic, strong) NSArray *callBacks;


@property (nonatomic ,strong) NSDictionary *onClick;//string
@property (nonatomic ,strong) NSDictionary *onVisible;
@property (nonatomic ,strong) NSDictionary *onInvisible;

- (void)handleChangeOn:(NSString *)changeOnstr;

- (void)handleDismissOn:(NSString *)dismissOnStr;

@end

