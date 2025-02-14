--disable_query_log
--disable_result_log
SELECT @init_ndb_conflict_fn_epoch_trans:=(VARIABLE_VALUE+0) FROM INFORMATION_SCHEMA.GLOBAL_STATUS WHERE VARIABLE_NAME LIKE "NDB_CONFLICT_FN_EPOCH_TRANS";
SELECT @init_ndb_conflict_fn_epoch2_trans:=(VARIABLE_VALUE+0) FROM INFORMATION_SCHEMA.GLOBAL_STATUS WHERE VARIABLE_NAME LIKE "NDB_CONFLICT_FN_EPOCH2_TRANS";
SELECT @init_ndb_conflict_trans_row_conflict_count:=(VARIABLE_VALUE+0) FROM INFORMATION_SCHEMA.GLOBAL_STATUS WHERE VARIABLE_NAME LIKE "NDB_CONFLICT_TRANS_ROW_CONFLICT_COUNT";
SELECT @init_ndb_conflict_trans_row_reject_count:=(VARIABLE_VALUE+0) FROM INFORMATION_SCHEMA.GLOBAL_STATUS WHERE VARIABLE_NAME LIKE "NDB_CONFLICT_TRANS_ROW_REJECT_COUNT";
SELECT @init_ndb_conflict_trans_reject_count:=(VARIABLE_VALUE+0) FROM INFORMATION_SCHEMA.GLOBAL_STATUS WHERE VARIABLE_NAME LIKE "NDB_CONFLICT_TRANS_REJECT_COUNT";
SELECT @init_ndb_conflict_trans_detect_iter_count:=(VARIABLE_VALUE+0) FROM INFORMATION_SCHEMA.GLOBAL_STATUS WHERE VARIABLE_NAME LIKE "NDB_CONFLICT_TRANS_DETECT_ITER_COUNT";
SELECT @init_ndb_conflict_trans_conflict_commit_count:=(VARIABLE_VALUE+0) FROM INFORMATION_SCHEMA.GLOBAL_STATUS WHERE VARIABLE_NAME LIKE "NDB_CONFLICT_TRANS_CONFLICT_COMMIT_COUNT";
SELECT @init_ndb_conflict_epoch_delete_delete_count:=(VARIABLE_VALUE+0) FROM INFORMATION_SCHEMA.GLOBAL_STATUS WHERE VARIABLE_NAME LIKE "NDB_CONFLICT_EPOCH_DELETE_DELETE_COUNT";
--enable_query_log
--enable_result_log
